// For license of this file, see <project-root-folder>/LICENSE.md.

#ifndef SETTINGSBROWSERMAIL_H
#define SETTINGSBROWSERMAIL_H

#include "gui/settings/settingspanel.h"

#include "ui_settingsbrowsermail.h"

class SettingsBrowserMail : public SettingsPanel {
  Q_OBJECT

  public:
    explicit SettingsBrowserMail(Settings* settings, QWidget* parent = nullptr);
    virtual ~SettingsBrowserMail();

    QString title() const;
    void loadSettings();
    void saveSettings();

  private slots:
    void changeDefaultBrowserArguments(int index);
    void selectBrowserExecutable();
    void changeDefaultEmailArguments(int index);
    void selectEmailExecutable();
    void displayProxyPassword(int state);
    void onProxyTypeChanged(int index);

  private:
    Ui::SettingsBrowserMail* m_ui;
};

inline QString SettingsBrowserMail::title() const {
  return tr("Proxy");
}

#endif // SETTINGSBROWSERMAIL_H
