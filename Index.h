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

    // The Skeleton

    auto left_column = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    left_column->setStyleClass("left-column");

    auto right_column = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    right_column ->setStyleClass("right-column");

    auto aboutPage = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    aboutPage->setStyleClass("about-page");

    auto EducationandExperience = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    EducationandExperience->setStyleClass("educationandexperience");



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



    auto imageContainer = right_column->addWidget(cpp14::make_unique<WContainerWidget>());
    auto image = imageContainer->addWidget(cpp14::make_unique<WImage>("myface.jpg"));
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


    auto aboutAboutPage = aboutPage->addWidget(cpp14::make_unique<WText>());
    aboutAboutPage ->setStyleClass("about-About");
    aboutAboutPage ->setText("About");

    auto Mybackground = aboutPage->addWidget(cpp14::make_unique<WText>());
    Mybackground ->setStyleClass("MyBackground");
    Mybackground ->setText("MY BACKGROUND");

    auto TextAboutMe = aboutPage->addWidget(cpp14::make_unique<WText>());
    TextAboutMe->setStyleClass("TextAboutMe");
    TextAboutMe->setText("<p>With a passion for business, social media, and all things marketing, "
                         "I have both the skill set <br/> and professional background necessary to dive deep into the "
                         "marketing world. As an <br/>upbeat, self-motivated team player with excellent communication, I envi"
                         "sion an exciting <br/>future in the industry. Browse my site to see all that I h"
                         "ave to offer</p>.");




}

#endif //MYSITE_INDEX_H
