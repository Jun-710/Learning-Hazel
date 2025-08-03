#pragma once
#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();
int main(int argc ,char **argv) {
	Hazel::Log::init();
	HZ_CORE_WARN("ok core");
	HZ_INFO("ok client");
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}
#endif