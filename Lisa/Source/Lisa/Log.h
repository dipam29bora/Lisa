#pragma once

#include "Core.h"

#include <memory>
#include <stdio.h>

#include <spdlog/spdlog.h>


namespace Lisa
{
	class LISA_API Log
	{
		public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLoger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLoger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


//**CORE LOGS*/
#define LISA_CORE_INFO(...)			Lisa::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LISA_CORE_WARN(...)			Lisa::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LISA_CORE_ERROR(...)		Lisa::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LISA_CORE_TRACE(...)		Lisa::Log::GetCoreLogger()->trace(__VA_ARGS__)


//**CLIENT LOGS*/
#define LISA_INFO(...)			Lisa::Log::GetClientLogger()->info(__VA_ARGS__)
#define LISA_WARN(...)			Lisa::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LISA_ERROR(...)			Lisa::Log::GetClientLogger()->error(__VA_ARGS__)
#define LISA_TRACE(...)			Lisa::Log::GetClientLogger()->trace(__VA_ARGS__)