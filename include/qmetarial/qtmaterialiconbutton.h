#ifndef QTMATERIALICONBUTTON_H
#define QTMATERIALICONBUTTON_H

#include <QtWidgets/QAbstractButton>
#include "components_global.h"

class QtMaterialIconButtonPrivate;

class COMPONENTS_EXPORT QtMaterialIconButton : public QAbstractButton
{
    Q_OBJECT

public:
    explicit QtMaterialIconButton(const QIcon &icon, QWidget *parent = 0);
    explicit QtMaterialIconButton(const QIcon &icon, const QIcon &disabledIcon, QWidget *parent = 0);
    ~QtMaterialIconButton();

    QSize sizeHint() const Q_DECL_OVERRIDE;

    void setDisabledIcon(const QIcon &_disabledIcon);

    void setUseColor(bool value);
    bool useColor();

    void setUseThemeColors(bool value);
    bool useThemeColors() const;

    void setColor(const QColor &color);
    QColor color() const;

    void setDisabledColor(const QColor &color);
    QColor disabledColor() const;

protected:
    QtMaterialIconButton(QtMaterialIconButtonPrivate &d, QWidget *parent = 0);

    bool event(QEvent *event) Q_DECL_OVERRIDE;
    bool eventFilter(QObject *obj, QEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

    const QScopedPointer<QtMaterialIconButtonPrivate> d_ptr;

private:
    Q_DISABLE_COPY(QtMaterialIconButton)
    Q_DECLARE_PRIVATE(QtMaterialIconButton)
};

#endif  // QTMATERIALICONBUTTON_H
