#include<iostream>
#include "show_result.h"
#include <SDL2/SDL.h>

void ShowResult::drawResult()
{
    const int WINDOW_WIDTH = 1000;
    const int WINDOW_HEIGHT = 1000;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL 初始化失败: " << SDL_GetError() << std::endl;
        return;
    }

    SDL_Window* window = SDL_CreateWindow("SDL Rectangle Demo",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          WINDOW_WIDTH,
                                          WINDOW_HEIGHT,
                                          SDL_WINDOW_SHOWN);

    if (!window) {
        std::cerr << "窗口创建失败: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        std::cerr << "渲染器创建失败: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return;
    }

    // 设置背景为白色
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    // 设置绘图颜色为黑色
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    // 定义一个矩形并绘制
    SDL_Rect rect = { 400, 400, 200, 200 };
    SDL_RenderDrawRect(renderer, &rect);

    // 显示渲染结果
    SDL_RenderPresent(renderer);

    // 等待关闭
    SDL_Delay(5000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}