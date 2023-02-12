#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"

namespace lve 
{
	class FirstApp
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		//FirstApp();
		//~FirstApp();
		void run();

	private:
		LveWindow lveWindow{ WIDTH, HEIGHT, "Hail Vulkan!" };
		LvePipeline lvePipeline{ "simple_shader.vert.spv", "simple_shader.frag.spv" };

	};

}