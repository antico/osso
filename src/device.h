////////////////////////////////////////
//  File      : device.h              //
//  Written by: g_cigala@virgilio.it  //
//  Copyright : GPL                   //
////////////////////////////////////////

#ifndef DEVICE_H
#define DEVICE_H

#include "defs.h"
#include "extension.h"

////////////////////////////////////////

class Device : public QWidget
{
    Q_OBJECT
    
public:
    Device(QWidget * parent = 0);
    ~Device();
    void init();
    int get_mixer_fd() const;
    int get_mixer_dev(int) const;
    void create_extensions(int, int);
    QHash <int, Extension *> get_extensions();
    QMap <QString, QStringList> get_system_info();
   
private slots:

private:
    QHash <int, Extension *> ext_list;
    QMap <QString, QStringList> system_info;

};
#endif




