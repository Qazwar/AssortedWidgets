#include "Button.h"

namespace AssortedWidgets
{
	namespace Widgets
	{
        Button::Button(const std::string &text)
            :AbstractButton(4,4,8,8),
              m_text(text)
		{
            m_size=getPreferedSize();
            m_horizontalStyle=Element::Fit;
            m_verticalStyle=Element::Fit;
		}

		Button::~Button(void)
		{
		}
	}
}
