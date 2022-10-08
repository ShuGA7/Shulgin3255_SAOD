#pragma once
class Str {
	char* m_pszText;
public:

	Str() 	//����������� ��� ���������� (default)*
	{
		m_pszText = new char[1]{ 0 };
	}

	~Str() { delete[]m_pszText; }

	Str(const char* p)
	{
		if (p) {
			m_pszText = new char[strlen(p) + 1];
			strcpy_s(m_pszText, strlen(p) + 1, p);
		}
		else
			m_pszText = new char[1]{ 0 };
	}
	operator const char* ()const { return m_pszText; }

	Str(const Str& s) //����������� ������ �� ������
	{
		m_pszText = new char[strlen(s.m_pszText) + 1];
		strcpy_s(m_pszText,
			strlen(s.m_pszText) + 1,
			s.m_pszText);
	}
	const Str& operator = (const Str& s) //����������� ������ �� ������
	{
		if (&s == this) return *this;
		delete[] m_pszText;	 //����������� ������� ������					//������ ������ �����������
		m_pszText = new char[strlen(s.m_pszText) + 1];
		strcpy_s(m_pszText, strlen(s.m_pszText) + 1, s.m_pszText);
		return *this;
	}
	Str& operator +=(const char* sz)
	{
		char* temp = new char[strlen(m_pszText) + 1];
		strcpy_s(temp, strlen(m_pszText) + 1, m_pszText);
		delete[] m_pszText;
		m_pszText = new char[2 + strlen(sz) + strlen(temp)];
		strcpy_s(m_pszText, strlen(temp) + 1, temp);
		strcat_s(m_pszText, strlen(temp) + 1 + strlen(sz), sz);
		delete[] temp;
		return *this;
	}
	Str operator +(const char* sz) const
	{
		char* temp = new char[strlen(m_pszText) + 1 + strlen(sz)];
		strcpy_s(temp, strlen(m_pszText) + 1, m_pszText);
		strcat_s(temp, strlen(temp) + 1 + strlen(sz), sz);
		return temp;
	}
};
