#include "component/view/RefreshView.h"

#include "component/controller/RefreshController.h"

RefreshView::RefreshView(ViewLayout* viewLayout)
	: View(viewLayout, Vec2i(100, 100))
{
}

RefreshView::~RefreshView()
{
}

std::string RefreshView::getName() const
{
	return "RefreshView";
}

RefreshController* RefreshView::getController()
{
	return View::getController<RefreshController>();
}
