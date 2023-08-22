#include"Application.h"
#include<stdio.h>

namespace Grimor{

  Application::Application(){

  }

  Application::~Application(){

  }


  void Application::run(){
    while(true){
        printf("batata");
        getc(stdin);
    }
  }

}
