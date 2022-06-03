#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Rash {

	class RASH_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define RASH_CORE_FATAL(...) ::Rash::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define RASH_CORE_ERROR(...) ::Rash::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RASH_CORE_WARN(...) ::Rash::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RASH_CORE_INFO(...) ::Rash::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RASH_CORE_TRACE(...) ::Rash::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client log macros
#define RASH_FATAL(...) ::Rash::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define RASH_ERROR(...) ::Rash::Log::GetClientLogger()->error(__VA_ARGS__)
#define RASH_WARN(...) ::Rash::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RASH_INFO(...) ::Rash::Log::GetClientLogger()->info(__VA_ARGS__)
#define RASH_TRACE(...) ::Rash::Log::GetClientLogger()->trace(__VA_ARGS__)