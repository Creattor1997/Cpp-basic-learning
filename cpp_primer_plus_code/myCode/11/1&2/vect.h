#pragma once

#include <iostream>

namespace n_vector
{
	using std::ostream;

	class TVector
	{
		
	public:
		enum Mode { RECT, POL };	// �������ͣ�����Ϊֱ�����ꡢ������

	public:
		explicit TVector(double a = 0, double b = 0, Mode mode = RECT);	// (x, y) OR (length, angle)

		void reset(double a = 0, double b = 0, Mode mode = RECT);

		void setMode(Mode mode);
		Mode getMode(void) const;

		double getX(void) const;
		double getY(void) const;
		double getLength(void) const;
		double getAngle(void) const;

		TVector operator+ (const TVector& rvalue) const;
		TVector& operator+= (const TVector& rvalue);
		TVector operator- (void) const;

		// ======================================

	private:
		void m_convertPolarToRect(double length, double angle);
		void m_converRectToPolar(double& length, double& angle) const;

	private:
		double	m_x;		// ֱ�������X����
		double	m_y;		// ֱ�������Y����
		Mode	m_mode;
	};

	ostream& operator<< (ostream& os, const TVector& vec);
}
