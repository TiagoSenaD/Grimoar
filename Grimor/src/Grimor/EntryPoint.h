#ifndef ENTRYPOINT_INCLUDE
#define ENTRYPOINT_INCLUDE

//TODO Coments
extern Grimor::Application * Grimor::CreatApp();

int main(int argc, char * argv[]){

  auto app = Grimor::CreatApp();
  app->run();
  delete app;

  return 0;
}

#endif
