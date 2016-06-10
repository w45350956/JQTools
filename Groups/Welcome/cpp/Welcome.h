﻿#ifndef __Welcome_h__
#define __Welcome_h__

// JQToolsLibrary import
#include "JQToolsLibrary.h"

#define WELCOME_INITIALIZA                                               \
{                                                                       \
    qmlRegisterType<Welcome::Manage>("Welcome", 1, 0, "WelcomeManage"); \
}

namespace Welcome
{

class Manage: public AbstractTool
{
    Q_OBJECT
    Q_DISABLE_COPY(Manage)

public:
    Manage() = default;

    ~Manage() = default;

public slots:
    void openGitHubLink();

    void openLatestVersionDownloadLink();
};

}

#endif//__Welcome_h__
