#ifndef TESTE_INCLUDE
#define TESTE_INCLUDE

namespace Grimor{

  class Application{
    public:
      Application();
      virtual ~Application();
      void run();
  };

  Application* CreatApp();
}




#endif
