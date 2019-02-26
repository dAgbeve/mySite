//
// Created by alovii on 2/22/19.
//

#ifndef MYSITE_INDEX_H
#define MYSITE_INDEX_H

#include <Wt/WApplication.h>
#include <Wt/WServer.h>
#include <Wt/WBreak.h>
#include <Wt/WContainerWidget.h>
#include <Wt/WText.h>
#include <Wt/WLink.h>
#include <Wt/WString.h>
#include <Wt/WImage.h>
#include <Wt/WLinkedCssStyleSheet.h>
#include <Wt/WCssDecorationStyle.h>

#include <iostream>

using namespace Wt;
using namespace std;

class MyWeb : public WApplication
{

public:
    MyWeb(const WEnvironment &env);

private:
    string appName;
    WText *about, *EducationandExperience, *SkillsandLanguages, *AwardsandInterests;
    WImage *image;



};
MyWeb::MyWeb(const WEnvironment &env) : WApplication(env){
    appName = "Douglas's Website";
    setTitle(appName);
    useStyleSheet("HomeStyle.css");


    // This is for the header

    auto header = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    header->setStyleClass("myweb-header");
    auto insideHeader = header->addWidget(cpp14::make_unique<WContainerWidget>());
    insideHeader->setStyleClass("myweb-header header-text");


    auto AboutHeader = insideHeader->addWidget(cpp14::make_unique<WText>());
    AboutHeader->setStyleClass("about-header");
    AboutHeader->setText("About");

    auto EducationAndExperience = insideHeader->addWidget(cpp14::make_unique<WText>());
    EducationAndExperience->setStyleClass("EducationSkillsAwards");
    EducationAndExperience->setText("Education & Experience");

    auto SkillsAndLanguages = insideHeader->addWidget(cpp14::make_unique<WText>());
    SkillsAndLanguages->setStyleClass("EducationSkillsAwards");
    SkillsAndLanguages->setText("Skills & Languages");

    auto AwardsAndInterests = insideHeader->addWidget(cpp14::make_unique<WText>());
    AwardsAndInterests->setStyleClass("EducationSkillsAwards");
    AwardsAndInterests->setText("Awards & Interests");

    // This is for the left colum, the big picture and all

    auto left_column = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    left_column->setStyleClass("left-column");

    auto helloIM = left_column->addWidget(cpp14::make_unique<WText>());
    helloIM->setStyleClass("helloIM");
    helloIM->setText("H E L L O, I ' M");

    auto BigName = left_column->addWidget(cpp14::make_unique<WText>());
    BigName ->setStyleClass("Bigname");
    BigName->setText("Douglas D. Agbeve.");

    auto left_column_deg = left_column->addWidget(cpp14::make_unique<WText>());
    left_column_deg ->setStyleClass("left_column_deg");
    left_column_deg->setText("Computer Science Student.");

    // this is for the right column

    auto right_column = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    right_column ->setStyleClass("right-column");


    auto imageContainer = right_column->addWidget(cpp14::make_unique<WContainerWidget>());
    auto image = imageContainer->addWidget(cpp14::make_unique<WImage>("image-1.jpg"));
    image->setStyleClass("image-size");

    auto rightColumnName =right_column->addWidget(cpp14::make_unique<WText>());
    rightColumnName->setText("<h2>Douglas D. Agbeve</h2>");
    rightColumnName->setStyleClass("right-column-name");

    auto MSc_CS =right_column->addWidget(cpp14::make_unique<WText>());
    MSc_CS->setText("<p2>MSc in Computer Science</p2>");
    MSc_CS->setStyleClass("right-column-name right-column-msc");

    auto email_rightColumn =right_column->addWidget(cpp14::make_unique<WText>());
    email_rightColumn->setText("<p2>info@mysite.com <br/> 0039 320 029 6500 </p2>");
    email_rightColumn->setStyleClass("right-column-name email-rightColumn");


            //this is for the about page

    auto aboutPage = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    aboutPage->setStyleClass("about-page");
    auto aboutAboutPage = aboutPage->addWidget(cpp14::make_unique<WText>());
    aboutAboutPage ->setText("About");
    aboutAboutPage ->setStyleClass("about-About");






}

#endif //MYSITE_INDEX_H
