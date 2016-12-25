#pragma once

#ifndef CHIG_GUI_MODULE_BROWSER_HPP
#define CHIG_GUI_MODULE_BROWSER_HPP

#include <QTreeWidget>

class MainWindow;

#include <chig/JsonModule.hpp>
#include <chig/Context.hpp>

class ModuleBrowser : public QTreeWidget
{
	Q_OBJECT

public:
	ModuleBrowser(QWidget* parent = nullptr);

signals:
	void moduleSelected(QString name);

public slots:
	void loadWorkspace(chig::Context& path);
    
private:
  
  chig::Context* mContext = nullptr;

};

#endif  // CHIG_GUI_MODULE_BROWSER_HPP