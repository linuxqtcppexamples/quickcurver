#ifndef FATTERITEM_H
#define FATTERITEM_H
#include "curveitem.h"

class FatterItem : public CurveItem {
public:
	FatterItem(QSGNode *node, QQuickView *view, int fieldsize);
	QString getIconName();
private:
	void use(QCurver *curver);
	void deuse(QCurver *curver);
};

#endif // FATTERITEM_H
