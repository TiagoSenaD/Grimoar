#include<Grimor.h>

//TODO COMENTS
class Sandbox : public Grimor::Application{};

//TODO COMENTS

Grimor::Application* Grimor::CreatApp(){
  return new Sandbox();

}
