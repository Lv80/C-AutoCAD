// �����Ϳ������á������ࡱ�����ļ�������ɵ� IDispatch ��װ����

#import "C:\\Program Files\\Common Files\\Autodesk Shared\\acax22enu.tlb" no_namespace
// CAcadMenuGroup ��װ����

class CAcadMenuGroup : public COleDispatchDriver
{
public:
	CAcadMenuGroup() {} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CAcadMenuGroup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAcadMenuGroup(const CAcadMenuGroup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IAcadMenuGroup ����
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x60020000, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x60020001, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_Name()
	{
		CString result;
		InvokeHelper(0x60020002, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_Type()
	{
		long result;
		InvokeHelper(0x60020003, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_MenuFileName()
	{
		CString result;
		InvokeHelper(0x60020004, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Menus()
	{
		LPDISPATCH result;
		InvokeHelper(0x60020005, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Toolbars()
	{
		LPDISPATCH result;
		InvokeHelper(0x60020006, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Unload()
	{
		InvokeHelper(0x60020007, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Save(long MenuFileType)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x60020008, DISPATCH_METHOD, VT_EMPTY, NULL, parms, MenuFileType);
	}
	void SaveAs(LPCTSTR MenuFileName, long MenuFileType)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x60020009, DISPATCH_METHOD, VT_EMPTY, NULL, parms, MenuFileName, MenuFileType);
	}

	// IAcadMenuGroup ����
public:

};