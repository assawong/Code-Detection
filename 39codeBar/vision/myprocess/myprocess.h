// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� MYPROCESS_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// MYPROCESS_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef MYPROCESS_EXPORTS
#define MYPROCESS_API __declspec(dllexport)
#else
#define MYPROCESS_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif



struct point
{
	int x;
	int y;
};



MYPROCESS_API void _stdcall gray2rbg( void *src, void *des, int srcw, int srch, int desw, int desh,int desstride );

MYPROCESS_API void _stdcall detectcode();

MYPROCESS_API int _stdcall process(void* pdata, unsigned int w, unsigned int h, char* strval);

MYPROCESS_API int _stdcall process1(void* pdata, unsigned int w, unsigned int h, char* strval);

MYPROCESS_API int _stdcall findcode(void* pdata, unsigned int w, unsigned int h);

MYPROCESS_API int __stdcall teststring(char* val);



#ifdef __cplusplus
}
#endif