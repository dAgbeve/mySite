//
// Created by Douglas Agbeve on 2/22/19.
//



#include "Index.h"

std::unique_ptr<WApplication> createHomepage(const WEnvironment &env){

    return  cpp14::make_unique<MyWeb>(env);

}
int main (int argc, char **argv){

    return WRun(argc,argv,&createHomepage);
}


