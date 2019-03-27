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
#include <Wt/WLayout.h>
#include <Wt/WEvent.h>
#include <Wt/WJavaScript.h>

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

    auto containHeaderText = header->addWidget(cpp14::make_unique<WContainerWidget>());
    containHeaderText->setStyleClass("containHeaderText");





    auto AboutHeader = containHeaderText->addWidget(cpp14::make_unique<WText>());
    AboutHeader->setStyleClass("about-header");
    AboutHeader->setText("About");


    AboutHeader->clicked().connect([&](const WMouseEvent&){
        root()->doJavaScript(
                "  var elmnt = document.getElementById(\"AboutPage\");\n"
                " const y =  elmnt.getBoundingClientRect().top + window.scrollY;\n"
                " window.scroll({\n"
                "                          top: y,\n"
                "                          behavior: 'smooth'\n"
                "                  }); ");
    });

    auto EducationAndExperience = containHeaderText->addWidget(cpp14::make_unique<WText>());
    EducationAndExperience->setStyleClass("EducationSkillsAwards");
    EducationAndExperience->setText("Education & Experience");

    EducationAndExperience->clicked().connect([&](const WMouseEvent&){
        root()->doJavaScript(
                "  var elmnt = document.getElementById(\"EducExpPage\");\n"
                " const y =  elmnt.getBoundingClientRect().top + window.scrollY;\n"
                " window.scroll({\n"
                "                          top: y,\n"
                "                          behavior: 'smooth'\n"
                "                  }); ");
    });

    auto SkillsAndLanguages = containHeaderText->addWidget(cpp14::make_unique<WText>());
    SkillsAndLanguages->setStyleClass("EducationSkillsAwards");
    SkillsAndLanguages->setText("Skills & Languages");

    SkillsAndLanguages->clicked().connect([&](const WMouseEvent&){
        root()->doJavaScript(
                "  var elmnt = document.getElementById(\"SkLanguaes\");\n"
                " const y =  elmnt.getBoundingClientRect().top + window.scrollY;\n"
                " window.scroll({\n"
                "                          top: y,\n"
                "                          behavior: 'smooth'\n"
                "                  }); ");
    });

    auto AwardsAndInterests = containHeaderText->addWidget(cpp14::make_unique<WText>());
    AwardsAndInterests->setStyleClass("EducationSkillsAwards");
    AwardsAndInterests->setText("Awards & Interests");

    AwardsAndInterests->clicked().connect([&](const WMouseEvent&){
        root()->doJavaScript(
                "  var elmnt = document.getElementById(\"EducExpPage\");\n"
                " const y =  elmnt.getBoundingClientRect().top + window.scrollY;\n"
                " window.scroll({\n"
                "                          top: y,\n"
                "                          behavior: 'smooth'\n"
                "                  }); ");
    });

    // The Skeleton

    auto left_column = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    left_column->setStyleClass("left-column");

    auto right_column = left_column->addWidget(cpp14::make_unique<WContainerWidget>());
    right_column ->setStyleClass("right-column");

    auto aboutPage = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    aboutPage->setStyleClass("about-page");
    aboutPage->setId("AboutPage");

    auto EducExpPage = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    EducExpPage->setStyleClass("educationandexperience");
    EducExpPage->setId("EducExpPage");

    auto SkLanguaes = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    SkLanguaes->setStyleClass("SkLanguaes");
    SkLanguaes->setId("SkLanguaes");

    auto HearFromYou = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    HearFromYou->setStyleClass("HearFromYou");
    HearFromYou->setId("HearFromYou");

    auto footer = root()->addWidget(cpp14::make_unique<WContainerWidget>());
    footer->setStyleClass("footer");
    footer->setId("footer");


    auto helloIM = left_column->addWidget(cpp14::make_unique<WText>());
    helloIM->setStyleClass("helloIM");
    helloIM->setText("H E L L O, I ' M");

    auto BigName = left_column->addWidget(cpp14::make_unique<WText>());
    BigName ->setStyleClass("Bigname");
    BigName->setText("Douglas");

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
//    aboutAboutPage->setId("AboutPage");

    auto Mybackground = aboutPage->addWidget(cpp14::make_unique<WText>());
    Mybackground ->setStyleClass("MyBackground");
    Mybackground ->setText("MY BACKGROUND");

    auto TextAboutMe = aboutPage->addWidget(cpp14::make_unique<WText>());
    TextAboutMe->setStyleClass("TextAboutMe");
    TextAboutMe->setText("<p>With a passion for business, social media, and all things marketing, "
                         "I have both the skill set <br/> and professional background necessary to dive deep into the "
                         "marketing world. As an <br/>upbeat, self-motivated team player with excellent communication, I envi"
                         "sion an exciting <br/>future in the industry. Browse my site to see all that I h"
                         "ave to offer.</p>");


    // The Education and Experience Page

    auto leftDivEEP = EducExpPage->addWidget(cpp14::make_unique<WContainerWidget>());
    leftDivEEP->setStyleClass("leftDivEEP");

    auto educationInleftDivEEP = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    educationInleftDivEEP->setStyleClass("educationInleftDivEEP");
    educationInleftDivEEP->setText("Education");

    auto whatIlearnedInleftDivEEP = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    whatIlearnedInleftDivEEP->setStyleClass("whatIlearnedInleftDivEEP");
    whatIlearnedInleftDivEEP->setText("WHAT I'VE LEARNED");

    auto mastersDegreeYear = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    mastersDegreeYear->setStyleClass("educationDivYear");
    mastersDegreeYear->setText("2016-Present");

    auto mastersDegreeSchool = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    mastersDegreeSchool->setStyleClass("educationDivSchool");
    mastersDegreeSchool->setText("University of Rome - La Sapienza<br/>"
                                 "Master of Science; Computer Science");

    auto mastersDegreeErasmusYear = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    mastersDegreeErasmusYear->setStyleClass("educationDivYear");
    mastersDegreeErasmusYear->setText("Jan.-Jul. 2017");

    auto mastersDegreeErasmusSchool = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    mastersDegreeErasmusSchool->setStyleClass("educationDivSchool");
    mastersDegreeErasmusSchool->setText("Erasmus - Ben Gurion University of the Negev.<br/>"
                                        " Beersheba, Israel<br/>");

    auto bachelorsDegreeYear = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    bachelorsDegreeYear->setStyleClass("educationDivYear");
    bachelorsDegreeYear->setText("2011-2015");

    auto bachelorsDegreeSchool = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    bachelorsDegreeSchool->setStyleClass("educationDivSchool");
    bachelorsDegreeSchool->setText("Ghana Institute of Management and Public Administration<br/>"
                                        " Achimota, Ghana<br/>");

    auto seniorHighYear = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    seniorHighYear->setStyleClass("educationDivYear");
    seniorHighYear->setText("2004-2007");

    auto seniorHighSchool = leftDivEEP->addWidget(cpp14::make_unique<WText>());
    seniorHighSchool->setStyleClass("educationDivSchool");
    seniorHighSchool->setText("Achimota Senior High School<br/>"
                                   " Achimota, Ghana<br/>");




    auto rightDivEEP = EducExpPage->addWidget(cpp14::make_unique<WContainerWidget>());
    rightDivEEP->setStyleClass("rightDivEEP");

    auto experienceInrightDivEEP = rightDivEEP->addWidget(cpp14::make_unique<WText>());
    experienceInrightDivEEP->setStyleClass("experienceInrightDivEEP");
    experienceInrightDivEEP->setText("Experience");

    auto whereIworkedInrightDivEEP = rightDivEEP->addWidget(cpp14::make_unique<WText>());
    whereIworkedInrightDivEEP->setStyleClass("whereIworkedInrightDivEEP");
    whereIworkedInrightDivEEP->setText("WHERE I'VE WORKED");

    auto anritsuYear = rightDivEEP->addWidget(cpp14::make_unique<WText>());
    anritsuYear->setStyleClass("whereIworkedYear");
    anritsuYear->setText("Sept.2018-Mar.2019");

    auto whereIworkedCompany = rightDivEEP->addWidget(cpp14::make_unique<WText>());
    whereIworkedCompany->setStyleClass("whereIworkedCompany");
    whereIworkedCompany->setText("Anritsu Solutions S.r.l. - Software Developer Intern<br/>"
                         "Rome, Italy.");

    auto ghanaArmyYear = rightDivEEP->addWidget(cpp14::make_unique<WText>());
    ghanaArmyYear->setStyleClass("whereIworkedYear");
    ghanaArmyYear->setText("Sept.2015-Aug.2016");

    auto ghanaArmyName = rightDivEEP->addWidget(cpp14::make_unique<WText>());
    ghanaArmyName->setStyleClass("whereIworkedCompany");
    ghanaArmyName->setText("Ghana Armed Forces - Directorate of Engineer Services<br/>"
                                 " - Systems Administrator<br/>"
                                 "Burma Camp, Ghana.");

    auto RomeMunPromoterYear = rightDivEEP->addWidget(cpp14::make_unique<WText>());
    RomeMunPromoterYear->setStyleClass("whereIworkedYear");
    RomeMunPromoterYear->setText("2014-2015");

    auto RomeMunPromoterName = rightDivEEP->addWidget(cpp14::make_unique<WText>());
    RomeMunPromoterName->setStyleClass("whereIworkedCompany");
    RomeMunPromoterName->setText("Rome Model United Nations - Promoter");

    auto skillsAndLanguages = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    skillsAndLanguages->setStyleClass("about-About");
    skillsAndLanguages->setText("Skills & Languages");

    auto whatIbringToTheTable = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    whatIbringToTheTable->setStyleClass("MyBackground");
    whatIbringToTheTable->setText("WHAT I BRING TO THE TABLE");

    auto skillsEnum = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    skillsEnum->setStyleClass("skillsEnum");
    skillsEnum->setText("<p> enum Skills {"
                        "Data Analysis"
                        "Content Writing & Editing"
                        "}</p>");

    auto programmingLanguages = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    programmingLanguages->setStyleClass("programmingLanguages");
    programmingLanguages->setText("- PROGRAMMING LANGUAGES & TOOLS");


    auto listLanguages = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    listLanguages->setStyleClass("listLanguages");
    listLanguages->setText(" - | C/C++ | Qt/Wt | HTML | CSS | JAVASCRIPT | MYSQL | JAVA | CMAKE/MAKE"
                           " | GIT | SVN | SWIFT | XCODE | GDB | VALGRIND | HADOOP | PYTHON | ");

    auto operatingSystems = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    operatingSystems->setStyleClass("programmingLanguages");
    operatingSystems->setText("- OPERATING SYSTEMS");

    auto listOsystems = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    listOsystems->setStyleClass("listLanguages");
    listOsystems->setText(" - | LINUX | MACINTOSH | WINDOWS |");

    auto dashLines = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    dashLines->setStyleClass("programmingLanguages");
    dashLines->setText("-----");


    auto humanLanguages = SkLanguaes->addWidget(cpp14::make_unique<WText>());
    humanLanguages->setStyleClass("listLanguages");
    humanLanguages->setText(" - | ENGLISH | *ITALIAN | EWE | TWI | GA | GA-ADANGME |");





}

#endif //MYSITE_INDEX_H
