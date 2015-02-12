#include <memory>

#include <QApplication>

#include "Application.h"
#include "includes.h" // defines 'void setup(int argc, char *argv[])'
#include "qt/utility/utilityQt.h"
#include "qt/view/QtViewFactory.h"
#include "utility/logging/ConsoleLogger.h"
#include "utility/logging/FileLogger.h"
#include "utility/logging/LogManager.h"

void init()
{
	std::shared_ptr<ConsoleLogger> consoleLogger = std::make_shared<ConsoleLogger>();
	consoleLogger->setLogLevel(Logger::LOG_WARNINGS | Logger::LOG_ERRORS);
	LogManager::getInstance()->addLogger(consoleLogger);
	LogManager::getInstance()->addLogger(std::make_shared<FileLogger>());

	utility::loadFontsFromDirectory("data/fonts", ".otf");
}

int main(int argc, char *argv[])
{
	setup(argc, argv);

	QApplication qtApp(argc, argv);

	init();

	QtViewFactory viewFactory;
	std::shared_ptr<Application> app = Application::create(&viewFactory);

	return qtApp.exec();
}
