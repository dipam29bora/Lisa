#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace Lisa {

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLoger = spdlog::stdout_color_mt("LISA");
		s_CoreLoger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}

	std::shared_ptr<spdlog::logger> Log::s_CoreLoger;

	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

}