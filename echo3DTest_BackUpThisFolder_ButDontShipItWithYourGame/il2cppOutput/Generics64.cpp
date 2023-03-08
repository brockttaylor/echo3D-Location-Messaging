#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8<R, T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		R ret;
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB;
// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
// System.Func`2<UniRx.Diagnostics.LogEntry,System.Boolean>
struct Func_2_tE0045D41CD58329D3732A3B13050C8537941339D;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB;
// System.Func`2<UniRx.Unit,System.Boolean>
struct Func_2_tCA33FD1D4912A4D1FC696C8B08D4D97A884F2E52;
// System.Func`2<UniRx.Unit,System.Object>
struct Func_2_t7F570F6D11A5A38730A27330374171BB45498FA4;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0;
// System.Func`3<System.Boolean,System.Int32,System.Boolean>
struct Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1;
// System.Func`3<System.Int64,System.Int32,System.Boolean>
struct Func_3_t1EBA448966CEA92A481CE27F7CEA5EA6E5EE423A;
// System.Func`3<UniRx.Diagnostics.LogEntry,System.Int32,System.Boolean>
struct Func_3_t0E8D5F73B938C445CEB91AEAC8EDF6204E295E15;
// System.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`3<UniRx.Unit,System.Int32,System.Boolean>
struct Func_3_tB86ACE009280215E8778D2284CB40C372B48282C;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// UniRx.IObservable`1<System.Boolean>
struct IObservable_1_t376E66A98F2F8411DDB526641BFE6443E50116ED;
// UniRx.IObservable`1<System.Int64>
struct IObservable_1_t7B9578BE3FECC7A8F164EC457AA83CD7CB1BF92D;
// UniRx.IObservable`1<UniRx.Diagnostics.LogEntry>
struct IObservable_1_tC2C4A6BDA581000F5E394071092A7469F8D53FAE;
// UniRx.IObservable`1<System.Object>
struct IObservable_1_t2546026F2BDB3A65782F4667E80F22E1EEF0DE95;
// UniRx.IObservable`1<UniRx.Unit>
struct IObservable_1_tE65572506F74F7C62B1F869310D84356FE50C73C;
// UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>
struct IObserver_1_tA1E698DB5418637260B532836722028AED77AA35;
// UniRx.IObserver`1<System.Boolean>
struct IObserver_1_t82F311203EC63354DAE3F8E8C50E8714AAF794B3;
// UniRx.IObserver`1<System.Int64>
struct IObserver_1_t1289A5C0A5694978F6D2DA6E4B734A13C1169B20;
// UniRx.IObserver`1<UniRx.Diagnostics.LogEntry>
struct IObserver_1_tF63BEB2268D411B8E6F301EBC7760758AD1BB1FF;
// UniRx.IObserver`1<System.Object>
struct IObserver_1_t7CCEA25F4EA11AAFE5EA8EBADDCC1E3CBA93BAA5;
// UniRx.IObserver`1<UniRx.Unit>
struct IObserver_1_t2A3AEB1B59DD16165FF715AE3B4B656D93318B80;
// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UniRx.Operators.WhereObservable`1<System.Boolean>
struct WhereObservable_1_t8E41D4DD201D2291ED468DE50BB5667FAFD0039D;
// UniRx.Operators.WhereObservable`1<System.Int64>
struct WhereObservable_1_tD6DC7230E61047DA810CEE3B3936FA5204C9E5F1;
// UniRx.Operators.WhereObservable`1<UniRx.Diagnostics.LogEntry>
struct WhereObservable_1_tD90F9B289C8E213EC70B3B2B940A16E903FE043D;
// UniRx.Operators.WhereObservable`1<System.Object>
struct WhereObservable_1_t6EEAB8AAF13EEEF3D36844B38AA0485B62A3EDF7;
// UniRx.Operators.WhereObservable`1<UniRx.Unit>
struct WhereObservable_1_t63D056F67050D8C9679D6D825F7319C87CE6237C;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F;
// UniRx.Operators.WhereSelectObservable`2<System.Int64,System.Boolean>
struct WhereSelectObservable_2_t4E161F7E0C70C166DCDF0990F7F17BE515158173;
// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>
struct WhereSelectObservable_2_t971CA3D42F2D0DBC72264F0D247AFBCF545C5365;
// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>
struct WhereSelectObservable_2_tF48E3A014E6FB5B64661B21629592A8E8DE74329;
// UniRx.Operators.WhereSelectObservable`2<UniRx.Unit,System.Object>
struct WhereSelectObservable_2_t58FBFB35A0F8976403CB3B8A4CEF592C54695C4A;
// UniRx.Operators.WhereObservable`1/Where_<System.Boolean>
struct Where__t8AB6CCEA5CDBCA6C3653C340AFC2B682F179A1BA;
// UniRx.Operators.WhereObservable`1/Where_<System.Int64>
struct Where__t01D82444F84C565AD2C05258ABDB5A8206818FB8;
// UniRx.Operators.WhereObservable`1/Where_<UniRx.Diagnostics.LogEntry>
struct Where__t5B22458E35158F7E267F543BA29F54285D0A3706;
// UniRx.Operators.WhereObservable`1/Where_<System.Object>
struct Where__tCC8C37A381BD094FEE71E776C5F85D23571B414E;
// UniRx.Operators.WhereObservable`1/Where_<UniRx.Unit>
struct Where__t2166903E7E3FDA2C73CC019AF885996CE6B6845E;
// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>
struct WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946;
// UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>
struct WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249;
// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t0769F5A976AE22001B72090856BA389A396B4886;
// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>
struct Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1;
// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>
struct Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361;
// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t512C02E2B1102946393817FA88F3239E9B320828;
// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE;
// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t745351DD358D96D9C7E88E6F053D214345454584;
// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t57557BB7D068237B9AC7C080FB9474057A754105;
// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A;
// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A;
// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702;
// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B;
// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704;
// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>
struct ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E;
// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0;
// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD;
// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB;
// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4;
// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED;
// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43;
// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593;
// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF;
// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B;
// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506;
// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB;
// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E;
// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D;
// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E;
// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C;
// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16;
// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9;
// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD;
// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7;
// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE;
// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88;
// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90;
// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533;
// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E;
// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2;
// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5;
// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82;
// UniRx.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99;
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue[]
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UniRx.ICancelable
struct ICancelable_t2B0D2F4582C612BFC07B6096F91C4A215F34C6A7;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// UniRx.Operators.IZipLatestObservable
struct IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4;
// UniRx.Operators.IZipObservable
struct IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UniRx.SingleAssignmentDisposable
struct SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99;
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/LeftObserver<System.Object,System.Object,System.Object>
struct LeftObserver_t5EDE270B219930A3D7C05CAAC0B0DD20918F62C0  : public RuntimeObject
{
	// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/LeftObserver::parent
	WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946* ___parent_0;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver<System.Object,System.Object,System.Object>
struct LeftObserver_t9C083E12C6420464C2AB25E6AA92A7ADFD34A934  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`3/ZipLatest<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver::parent
	ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* ___parent_0;
};

// UniRx.Operators.ZipObservable`3/Zip/LeftZipObserver<System.Object,System.Object,System.Object>
struct LeftZipObserver_tC9DAE7FD6E0A2DB6B96DE9D3AB9EA92E91AE7522  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`3/Zip<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip/LeftZipObserver::parent
	Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* ___parent_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>
struct OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<System.Boolean>
struct OperatorObservableBase_1_t2711435009297E2BA306F783392B88842A12E7D2  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<System.Int64>
struct OperatorObservableBase_1_t742533F920E9555C3525555D3172596FAFD7620C  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<UniRx.Diagnostics.LogEntry>
struct OperatorObservableBase_1_tA8119CC864C5189F878CA155BB2F5E31FDCDC543  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<System.Object>
struct OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>
struct OperatorObservableBase_1_tFA6A463A43DFD9D10CA77266BF6FF0E222C3191D  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>
struct OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Boolean,System.Boolean>
struct OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Int64,System.Boolean>
struct OperatorObserverBase_2_t2F138FC840BA37140FFD0488809753CEB17449DF  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Int64,System.Int64>
struct OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<UniRx.Diagnostics.LogEntry,UniRx.Diagnostics.LogEntry>
struct OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Boolean>
struct OperatorObserverBase_2_t88F68C6E3F7CFA918853107A84FBEBA555EC3119  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>
struct OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,System.Object>
struct OperatorObserverBase_2_t111BD849893414A5CD00A251509748EC53F22893  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94  : public RuntimeObject
{
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver<System.Object,System.Object,System.Object>
struct RightObserver_tBA7F5E6498E977DE62E014CD8EF532440BFF5759  : public RuntimeObject
{
	// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver::parent
	WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946* ___parent_0;
	// System.IDisposable UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver::selfSubscription
	RuntimeObject* ___selfSubscription_1;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver<System.Object,System.Object,System.Object>
struct RightObserver_t78A614ECBB5D54728037276D05E29823BFE7C0AC  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`3/ZipLatest<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver::parent
	ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* ___parent_0;
};

// UniRx.Operators.ZipObservable`3/Zip/RightZipObserver<System.Object,System.Object,System.Object>
struct RightZipObserver_tD5774B598012017D7AB74E6B6CA0F4732E397A4F  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`3/Zip<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip/RightZipObserver::parent
	Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* ___parent_0;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`1/ZipLatest<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::parent
	ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* ___parent_0;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipLatestObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipLatestObservable UniRx.Operators.ZipLatestObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipLatestObserver`1::index
	int32_t ___index_2;
	// T UniRx.Operators.ZipLatestObserver`1::value
	RuntimeObject* ___value_3;
};

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`1/Zip<T> UniRx.Operators.ZipObservable`1/Zip/ZipObserver::parent
	Zip_t0769F5A976AE22001B72090856BA389A396B4886* ___parent_0;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip/ZipObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipObservable UniRx.Operators.ZipObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipObserver`1::index
	int32_t ___index_2;
	// System.Collections.Generic.Queue`1<T> UniRx.Operators.ZipObserver`1::queue
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queue_3;
};

// UniRx.SingleAssignmentDisposable
struct SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D  : public RuntimeObject
{
	// System.Object UniRx.SingleAssignmentDisposable::gate
	RuntimeObject* ___gate_0;
	// System.IDisposable UniRx.SingleAssignmentDisposable::current
	RuntimeObject* ___current_1;
	// System.Boolean UniRx.SingleAssignmentDisposable::disposed
	bool ___disposed_2;
};

// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>
struct NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// System.Int32 UniRx.Operators.NthZipLatestObserverBase`1::length
	int32_t ___length_2;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_3;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_4;
};

// UniRx.Operators.NthZipObserverBase`1<System.Object>
struct NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// System.Collections.ICollection[] UniRx.Operators.NthZipObserverBase`1::queues
	ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* ___queues_2;
	// System.Boolean[] UniRx.Operators.NthZipObserverBase`1::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_3;
	// System.Int32 UniRx.Operators.NthZipObserverBase`1::length
	int32_t ___length_4;
};

// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8  : public Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7
{
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// UniRx.Operators.WhereObservable`1<System.Boolean>
struct WhereObservable_1_t8E41D4DD201D2291ED468DE50BB5667FAFD0039D  : public OperatorObservableBase_1_t2711435009297E2BA306F783392B88842A12E7D2
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereObservable`1::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereObservable`1::predicate
	Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate_2;
	// System.Func`3<T,System.Int32,System.Boolean> UniRx.Operators.WhereObservable`1::predicateWithIndex
	Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* ___predicateWithIndex_3;
};

// UniRx.Operators.WhereObservable`1<System.Int64>
struct WhereObservable_1_tD6DC7230E61047DA810CEE3B3936FA5204C9E5F1  : public OperatorObservableBase_1_t742533F920E9555C3525555D3172596FAFD7620C
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereObservable`1::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereObservable`1::predicate
	Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* ___predicate_2;
	// System.Func`3<T,System.Int32,System.Boolean> UniRx.Operators.WhereObservable`1::predicateWithIndex
	Func_3_t1EBA448966CEA92A481CE27F7CEA5EA6E5EE423A* ___predicateWithIndex_3;
};

// UniRx.Operators.WhereObservable`1<UniRx.Diagnostics.LogEntry>
struct WhereObservable_1_tD90F9B289C8E213EC70B3B2B940A16E903FE043D  : public OperatorObservableBase_1_tA8119CC864C5189F878CA155BB2F5E31FDCDC543
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereObservable`1::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereObservable`1::predicate
	Func_2_tE0045D41CD58329D3732A3B13050C8537941339D* ___predicate_2;
	// System.Func`3<T,System.Int32,System.Boolean> UniRx.Operators.WhereObservable`1::predicateWithIndex
	Func_3_t0E8D5F73B938C445CEB91AEAC8EDF6204E295E15* ___predicateWithIndex_3;
};

// UniRx.Operators.WhereObservable`1<System.Object>
struct WhereObservable_1_t6EEAB8AAF13EEEF3D36844B38AA0485B62A3EDF7  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereObservable`1::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereObservable`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_2;
	// System.Func`3<T,System.Int32,System.Boolean> UniRx.Operators.WhereObservable`1::predicateWithIndex
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicateWithIndex_3;
};

// UniRx.Operators.WhereObservable`1<UniRx.Unit>
struct WhereObservable_1_t63D056F67050D8C9679D6D825F7319C87CE6237C  : public OperatorObservableBase_1_tFA6A463A43DFD9D10CA77266BF6FF0E222C3191D
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereObservable`1::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereObservable`1::predicate
	Func_2_tCA33FD1D4912A4D1FC696C8B08D4D97A884F2E52* ___predicate_2;
	// System.Func`3<T,System.Int32,System.Boolean> UniRx.Operators.WhereObservable`1::predicateWithIndex
	Func_3_tB86ACE009280215E8778D2284CB40C372B48282C* ___predicateWithIndex_3;
};

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Int64,System.Boolean>
struct WhereSelect_t2C28971FEA49D168CA78FFFEE452245210FC1ADC  : public OperatorObserverBase_2_t2F138FC840BA37140FFD0488809753CEB17449DF
{
	// UniRx.Operators.WhereSelectObservable`2<T,TR> UniRx.Operators.WhereSelectObservable`2/WhereSelect::parent
	WhereSelectObservable_2_t4E161F7E0C70C166DCDF0990F7F17BE515158173* ___parent_2;
};

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Object,System.Boolean>
struct WhereSelect_t732F6106FBA5511149B3AAD148405FF7149AA2D9  : public OperatorObserverBase_2_t88F68C6E3F7CFA918853107A84FBEBA555EC3119
{
	// UniRx.Operators.WhereSelectObservable`2<T,TR> UniRx.Operators.WhereSelectObservable`2/WhereSelect::parent
	WhereSelectObservable_2_t971CA3D42F2D0DBC72264F0D247AFBCF545C5365* ___parent_2;
};

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Object,System.Object>
struct WhereSelect_tE6E032FDB820A8ECE532FAF200662BD62ADF6A3A  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// UniRx.Operators.WhereSelectObservable`2<T,TR> UniRx.Operators.WhereSelectObservable`2/WhereSelect::parent
	WhereSelectObservable_2_tF48E3A014E6FB5B64661B21629592A8E8DE74329* ___parent_2;
};

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<UniRx.Unit,System.Object>
struct WhereSelect_t440F87713DA1A8FC4D1399AE7C58249D0975CF80  : public OperatorObserverBase_2_t111BD849893414A5CD00A251509748EC53F22893
{
	// UniRx.Operators.WhereSelectObservable`2<T,TR> UniRx.Operators.WhereSelectObservable`2/WhereSelect::parent
	WhereSelectObservable_2_t58FBFB35A0F8976403CB3B8A4CEF592C54695C4A* ___parent_2;
};

// UniRx.Operators.WhereSelectObservable`2<System.Int64,System.Boolean>
struct WhereSelectObservable_2_t4E161F7E0C70C166DCDF0990F7F17BE515158173  : public OperatorObservableBase_1_t2711435009297E2BA306F783392B88842A12E7D2
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereSelectObservable`2::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereSelectObservable`2::predicate
	Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* ___predicate_2;
	// System.Func`2<T,TR> UniRx.Operators.WhereSelectObservable`2::selector
	Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* ___selector_3;
};

// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>
struct WhereSelectObservable_2_t971CA3D42F2D0DBC72264F0D247AFBCF545C5365  : public OperatorObservableBase_1_t2711435009297E2BA306F783392B88842A12E7D2
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereSelectObservable`2::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereSelectObservable`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_2;
	// System.Func`2<T,TR> UniRx.Operators.WhereSelectObservable`2::selector
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector_3;
};

// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>
struct WhereSelectObservable_2_tF48E3A014E6FB5B64661B21629592A8E8DE74329  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereSelectObservable`2::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereSelectObservable`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_2;
	// System.Func`2<T,TR> UniRx.Operators.WhereSelectObservable`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_3;
};

// UniRx.Operators.WhereSelectObservable`2<UniRx.Unit,System.Object>
struct WhereSelectObservable_2_t58FBFB35A0F8976403CB3B8A4CEF592C54695C4A  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T> UniRx.Operators.WhereSelectObservable`2::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereSelectObservable`2::predicate
	Func_2_tCA33FD1D4912A4D1FC696C8B08D4D97A884F2E52* ___predicate_2;
	// System.Func`2<T,TR> UniRx.Operators.WhereSelectObservable`2::selector
	Func_2_t7F570F6D11A5A38730A27330374171BB45498FA4* ___selector_3;
};

// UniRx.Operators.WhereObservable`1/Where_<System.Boolean>
struct Where__t8AB6CCEA5CDBCA6C3653C340AFC2B682F179A1BA  : public OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD
{
	// UniRx.Operators.WhereObservable`1<T> UniRx.Operators.WhereObservable`1/Where_::parent
	WhereObservable_1_t8E41D4DD201D2291ED468DE50BB5667FAFD0039D* ___parent_2;
	// System.Int32 UniRx.Operators.WhereObservable`1/Where_::index
	int32_t ___index_3;
};

// UniRx.Operators.WhereObservable`1/Where_<System.Int64>
struct Where__t01D82444F84C565AD2C05258ABDB5A8206818FB8  : public OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188
{
	// UniRx.Operators.WhereObservable`1<T> UniRx.Operators.WhereObservable`1/Where_::parent
	WhereObservable_1_tD6DC7230E61047DA810CEE3B3936FA5204C9E5F1* ___parent_2;
	// System.Int32 UniRx.Operators.WhereObservable`1/Where_::index
	int32_t ___index_3;
};

// UniRx.Operators.WhereObservable`1/Where_<UniRx.Diagnostics.LogEntry>
struct Where__t5B22458E35158F7E267F543BA29F54285D0A3706  : public OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D
{
	// UniRx.Operators.WhereObservable`1<T> UniRx.Operators.WhereObservable`1/Where_::parent
	WhereObservable_1_tD90F9B289C8E213EC70B3B2B940A16E903FE043D* ___parent_2;
	// System.Int32 UniRx.Operators.WhereObservable`1/Where_::index
	int32_t ___index_3;
};

// UniRx.Operators.WhereObservable`1/Where_<System.Object>
struct Where__tCC8C37A381BD094FEE71E776C5F85D23571B414E  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// UniRx.Operators.WhereObservable`1<T> UniRx.Operators.WhereObservable`1/Where_::parent
	WhereObservable_1_t6EEAB8AAF13EEEF3D36844B38AA0485B62A3EDF7* ___parent_2;
	// System.Int32 UniRx.Operators.WhereObservable`1/Where_::index
	int32_t ___index_3;
};

// UniRx.Operators.WhereObservable`1/Where_<UniRx.Unit>
struct Where__t2166903E7E3FDA2C73CC019AF885996CE6B6845E  : public OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94
{
	// UniRx.Operators.WhereObservable`1<T> UniRx.Operators.WhereObservable`1/Where_::parent
	WhereObservable_1_t63D056F67050D8C9679D6D825F7319C87CE6237C* ___parent_2;
	// System.Int32 UniRx.Operators.WhereObservable`1/Where_::index
	int32_t ___index_3;
};

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>
struct WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// UniRx.Operators.WithLatestFromObservable`3<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom::parent
	WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* ___parent_2;
	// System.Object UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom::gate
	RuntimeObject* ___gate_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom::hasLatest
	bool ___hasLatest_4;
	// TRight UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom::latestValue
	RuntimeObject* ___latestValue_5;
};

// UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>
struct WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<TLeft> UniRx.Operators.WithLatestFromObservable`3::left
	RuntimeObject* ___left_1;
	// UniRx.IObservable`1<TRight> UniRx.Operators.WithLatestFromObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t0769F5A976AE22001B72090856BA389A396B4886  : public OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F
{
	// UniRx.Operators.ZipObservable`1<T> UniRx.Operators.ZipObservable`1/Zip::parent
	ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`1/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<T>[] UniRx.Operators.ZipObservable`1/Zip::queues
	Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* ___queues_4;
	// System.Boolean[] UniRx.Operators.ZipObservable`1/Zip::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_5;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip::length
	int32_t ___length_6;
};

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>
struct Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip::parent
	ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`3/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<TLeft> UniRx.Operators.ZipObservable`3/Zip::leftQ
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___leftQ_4;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::leftCompleted
	bool ___leftCompleted_5;
	// System.Collections.Generic.Queue`1<TRight> UniRx.Operators.ZipObservable`3/Zip::rightQ
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___rightQ_6;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::rightCompleted
	bool ___rightCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704  : public OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F
{
	// UniRx.Operators.ZipLatestObservable`1<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest::parent
	ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`1/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest::length
	int32_t ___length_4;
	// T[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values_5;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_6;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>
struct ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E  : public OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346
{
	// UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest::parent
	ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`3/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// TLeft UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftValue
	RuntimeObject* ___leftValue_4;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftStarted
	bool ___leftStarted_5;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftCompleted
	bool ___leftCompleted_6;
	// TRight UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightValue
	RuntimeObject* ___rightValue_7;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightStarted
	bool ___rightStarted_8;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightCompleted
	bool ___rightCompleted_9;
};

// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB  : public OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5
{
	// UniRx.IObservable`1<T>[] UniRx.Operators.ZipLatestObservable`1::sources
	IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* ___sources_1;
};

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<TLeft> UniRx.Operators.ZipLatestObservable`3::left
	RuntimeObject* ___left_1;
	// UniRx.IObservable`1<TRight> UniRx.Operators.ZipLatestObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`4::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`4::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4::resultSelector
	ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* ___resultSelector_4;
};

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`5::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`5::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`5::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5::resultSelector
	ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* ___resultSelector_5;
};

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`6::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`6::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`6::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`6::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6::resultSelector
	ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* ___resultSelector_6;
};

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`7::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`7::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`7::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`7::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`7::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7::resultSelector
	ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* ___resultSelector_7;
};

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`8::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`8::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`8::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`8::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`8::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`8::source6
	RuntimeObject* ___source6_6;
	// UniRx.IObservable`1<T7> UniRx.Operators.ZipLatestObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8::resultSelector
	ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* ___resultSelector_8;
};

// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7  : public OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5
{
	// UniRx.IObservable`1<T>[] UniRx.Operators.ZipObservable`1::sources
	IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* ___sources_1;
};

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<TLeft> UniRx.Operators.ZipObservable`3::left
	RuntimeObject* ___left_1;
	// UniRx.IObservable`1<TRight> UniRx.Operators.ZipObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3::selector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___selector_3;
};

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`4::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`4::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4::resultSelector
	ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* ___resultSelector_4;
};

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`5::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`5::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`5::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5::resultSelector
	ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* ___resultSelector_5;
};

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`6::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`6::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`6::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`6::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6::resultSelector
	ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* ___resultSelector_6;
};

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`7::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`7::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`7::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`7::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`7::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7::resultSelector
	ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* ___resultSelector_7;
};

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2  : public OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512
{
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`8::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`8::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`8::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`8::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`8::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipObservable`8::source6
	RuntimeObject* ___source6_6;
	// UniRx.IObservable`1<T7> UniRx.Operators.ZipObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8::resultSelector
	ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* ___resultSelector_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// UniRx.Unit
struct Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791 
{
	union
	{
		struct
		{
		};
		uint8_t Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791__padding[1];
	};
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>
struct Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current_2;
};

// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249  : public Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_0;
};

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>
struct Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4/Zip::parent
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`4/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`4/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`4/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`4/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
};

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t512C02E2B1102946393817FA88F3239E9B320828  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5/Zip::parent
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`5/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`5/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`5/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`5/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`5/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
};

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6/Zip::parent
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`6/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`6/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`6/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`6/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`6/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`6/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
};

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t745351DD358D96D9C7E88E6F053D214345454584  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7/Zip::parent
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`7/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`7/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`7/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`7/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`7/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`7/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`7/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
};

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t57557BB7D068237B9AC7C080FB9474057A754105  : public NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54
{
	// UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8/Zip::parent
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`8/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`8/Zip::q1
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`8/Zip::q2
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`8/Zip::q3
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`8/Zip::q4
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`8/Zip::q5
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`8/Zip::q6
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q6_12;
	// System.Collections.Generic.Queue`1<T7> UniRx.Operators.ZipObservable`8/Zip::q7
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___q7_13;
};

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4/ZipLatest::parent
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`4/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
};

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5/ZipLatest::parent
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`5/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c4
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c4_10;
};

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6/ZipLatest::parent
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`6/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c4
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c5
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c5_11;
};

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7/ZipLatest::parent
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`7/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c4
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c5
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c6
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c6_12;
};

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED  : public NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475
{
	// UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8/ZipLatest::parent
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`8/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c1
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c2
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c3
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c4
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c5
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c6
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c6_12;
	// UniRx.Operators.ZipLatestObserver`1<T7> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c7
	ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* ___c7_13;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.JsonParser/JsonString::text
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonString::hasEscapes
	bool ___hasEscapes_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// UniRx.Diagnostics.LogEntry
struct LogEntry_t754E120559F62761C680987B249717A27E0F3223 
{
	// System.String UniRx.Diagnostics.LogEntry::<LoggerName>k__BackingField
	String_t* ___U3CLoggerNameU3Ek__BackingField_0;
	// UnityEngine.LogType UniRx.Diagnostics.LogEntry::<LogType>k__BackingField
	int32_t ___U3CLogTypeU3Ek__BackingField_1;
	// System.String UniRx.Diagnostics.LogEntry::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.DateTime UniRx.Diagnostics.LogEntry::<Timestamp>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CTimestampU3Ek__BackingField_3;
	// UnityEngine.Object UniRx.Diagnostics.LogEntry::<Context>k__BackingField
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___U3CContextU3Ek__BackingField_4;
	// System.Exception UniRx.Diagnostics.LogEntry::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_5;
	// System.String UniRx.Diagnostics.LogEntry::<StackTrace>k__BackingField
	String_t* ___U3CStackTraceU3Ek__BackingField_6;
	// System.Object UniRx.Diagnostics.LogEntry::<State>k__BackingField
	RuntimeObject* ___U3CStateU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UniRx.Diagnostics.LogEntry
struct LogEntry_t754E120559F62761C680987B249717A27E0F3223_marshaled_pinvoke
{
	char* ___U3CLoggerNameU3Ek__BackingField_0;
	int32_t ___U3CLogTypeU3Ek__BackingField_1;
	char* ___U3CMessageU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CTimestampU3Ek__BackingField_3;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___U3CContextU3Ek__BackingField_4;
	Exception_t_marshaled_pinvoke* ___U3CExceptionU3Ek__BackingField_5;
	char* ___U3CStackTraceU3Ek__BackingField_6;
	Il2CppIUnknown* ___U3CStateU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UniRx.Diagnostics.LogEntry
struct LogEntry_t754E120559F62761C680987B249717A27E0F3223_marshaled_com
{
	Il2CppChar* ___U3CLoggerNameU3Ek__BackingField_0;
	int32_t ___U3CLogTypeU3Ek__BackingField_1;
	Il2CppChar* ___U3CMessageU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CTimestampU3Ek__BackingField_3;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___U3CContextU3Ek__BackingField_4;
	Exception_t_marshaled_com* ___U3CExceptionU3Ek__BackingField_5;
	Il2CppChar* ___U3CStackTraceU3Ek__BackingField_6;
	Il2CppIUnknown* ___U3CStateU3Ek__BackingField_7;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::type
	int32_t ___type_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::boolValue
	bool ___boolValue_1;
	// System.Double UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::realValue
	double ___realValue_2;
	// System.Int64 UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::integerValue
	int64_t ___integerValue_3;
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonString UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::stringValue
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::arrayValue
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::objectValue
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	// System.Object UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::anyValue
	RuntimeObject* ___anyValue_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current_3;
};

// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB  : public MulticastDelegate_t
{
};

// System.Func`2<UniRx.Unit,System.Boolean>
struct Func_2_tCA33FD1D4912A4D1FC696C8B08D4D97A884F2E52  : public MulticastDelegate_t
{
};

// System.Func`2<UniRx.Unit,System.Object>
struct Func_2_t7F570F6D11A5A38730A27330374171BB45498FA4  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0  : public MulticastDelegate_t
{
};

// System.Func`3<System.Boolean,System.Int32,System.Boolean>
struct Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1  : public MulticastDelegate_t
{
};

// System.Func`3<System.Int64,System.Int32,System.Boolean>
struct Func_3_t1EBA448966CEA92A481CE27F7CEA5EA6E5EE423A  : public MulticastDelegate_t
{
};

// System.Func`3<UniRx.Diagnostics.LogEntry,System.Int32,System.Boolean>
struct Func_3_t0E8D5F73B938C445CEB91AEAC8EDF6204E295E15  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.Func`3<UniRx.Unit,System.Int32,System.Boolean>
struct Func_3_tB86ACE009280215E8778D2284CB40C372B48282C  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/Iterator`1<System.Object>

// System.Linq.Enumerable/Iterator`1<System.Object>

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/LeftObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/LeftObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3/Zip/LeftZipObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3/Zip/LeftZipObserver<System.Object,System.Object,System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObservableBase`1<System.Boolean>

// UniRx.Operators.OperatorObservableBase`1<System.Boolean>

// UniRx.Operators.OperatorObservableBase`1<System.Object>

// UniRx.Operators.OperatorObservableBase`1<System.Object>

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>

// UniRx.Operators.OperatorObserverBase`2<System.Boolean,System.Boolean>

// UniRx.Operators.OperatorObserverBase`2<System.Boolean,System.Boolean>

// UniRx.Operators.OperatorObserverBase`2<System.Int64,System.Int64>

// UniRx.Operators.OperatorObserverBase`2<System.Int64,System.Int64>

// UniRx.Operators.OperatorObserverBase`2<UniRx.Diagnostics.LogEntry,UniRx.Diagnostics.LogEntry>

// UniRx.Operators.OperatorObserverBase`2<UniRx.Diagnostics.LogEntry,UniRx.Diagnostics.LogEntry>

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>

// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3/Zip/RightZipObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3/Zip/RightZipObserver<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>

// UniRx.Operators.ZipLatestObserver`1<System.Object>

// UniRx.Operators.ZipLatestObserver`1<System.Object>

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>

// UniRx.Operators.ZipObserver`1<System.Object>

// UniRx.Operators.ZipObserver`1<System.Object>

// UniRx.SingleAssignmentDisposable

// UniRx.SingleAssignmentDisposable

// UnityEngine.Subsystem

// UnityEngine.Subsystem

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>

// UniRx.Operators.NthZipObserverBase`1<System.Object>

// UniRx.Operators.NthZipObserverBase`1<System.Object>

// UnityEngine.Subsystem`1<System.Object>

// UnityEngine.Subsystem`1<System.Object>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>

// UniRx.Operators.WhereObservable`1<System.Boolean>

// UniRx.Operators.WhereObservable`1<System.Boolean>

// UniRx.Operators.WhereObservable`1<System.Int64>

// UniRx.Operators.WhereObservable`1<System.Int64>

// UniRx.Operators.WhereObservable`1<UniRx.Diagnostics.LogEntry>

// UniRx.Operators.WhereObservable`1<UniRx.Diagnostics.LogEntry>

// UniRx.Operators.WhereObservable`1<System.Object>

// UniRx.Operators.WhereObservable`1<System.Object>

// UniRx.Operators.WhereObservable`1<UniRx.Unit>

// UniRx.Operators.WhereObservable`1<UniRx.Unit>

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Int64,System.Boolean>

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Int64,System.Boolean>

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Object,System.Boolean>

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Object,System.Boolean>

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Object,System.Object>

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<System.Object,System.Object>

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<UniRx.Unit,System.Object>

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<UniRx.Unit,System.Object>

// UniRx.Operators.WhereSelectObservable`2<System.Int64,System.Boolean>

// UniRx.Operators.WhereSelectObservable`2<System.Int64,System.Boolean>

// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>

// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>

// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>

// UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>

// UniRx.Operators.WhereSelectObservable`2<UniRx.Unit,System.Object>

// UniRx.Operators.WhereSelectObservable`2<UniRx.Unit,System.Object>

// UniRx.Operators.WhereObservable`1/Where_<System.Boolean>

// UniRx.Operators.WhereObservable`1/Where_<System.Boolean>

// UniRx.Operators.WhereObservable`1/Where_<System.Int64>

// UniRx.Operators.WhereObservable`1/Where_<System.Int64>

// UniRx.Operators.WhereObservable`1/Where_<UniRx.Diagnostics.LogEntry>

// UniRx.Operators.WhereObservable`1/Where_<UniRx.Diagnostics.LogEntry>

// UniRx.Operators.WhereObservable`1/Where_<System.Object>

// UniRx.Operators.WhereObservable`1/Where_<System.Object>

// UniRx.Operators.WhereObservable`1/Where_<UniRx.Unit>

// UniRx.Operators.WhereObservable`1/Where_<UniRx.Unit>

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>

// UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`1/Zip<System.Object>

// UniRx.Operators.ZipObservable`1/Zip<System.Object>

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`1<System.Object>

// UniRx.Operators.ZipLatestObservable`1<System.Object>

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`1<System.Object>

// UniRx.Operators.ZipObservable`1<System.Object>

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.InputSystem.Utilities.Substring

// UnityEngine.InputSystem.Utilities.Substring

// UniRx.Unit
struct Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791_StaticFields
{
	// UniRx.Unit UniRx.Unit::default
	Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791 ___default_0;
};

// UniRx.Unit

// System.Void

// System.Void

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>

// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>

// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>

// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>

// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>

// UniRx.Diagnostics.LogEntry

// UniRx.Diagnostics.LogEntry

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>

// System.Func`2<System.Int64,System.Boolean>

// System.Func`2<System.Int64,System.Boolean>

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.Object>

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>

// System.Func`2<UniRx.Unit,System.Boolean>

// System.Func`2<UniRx.Unit,System.Boolean>

// System.Func`2<UniRx.Unit,System.Object>

// System.Func`2<UniRx.Unit,System.Object>

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>

// System.Func`3<System.Boolean,System.Int32,System.Boolean>

// System.Func`3<System.Boolean,System.Int32,System.Boolean>

// System.Func`3<System.Int64,System.Int32,System.Boolean>

// System.Func`3<System.Int64,System.Int32,System.Boolean>

// System.Func`3<UniRx.Diagnostics.LogEntry,System.Int32,System.Boolean>

// System.Func`3<UniRx.Diagnostics.LogEntry,System.Int32,System.Boolean>

// System.Func`3<System.Object,System.Int32,System.Boolean>

// System.Func`3<System.Object,System.Int32,System.Boolean>

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`3<UniRx.Unit,System.Int32,System.Boolean>

// System.Func`3<UniRx.Unit,System.Int32,System.Boolean>

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UniRx.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460  : public RuntimeArray
{
	ALIGN_FIELD (8) Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* m_Items[1];

	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;

// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::get_Current()
inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  Substring_t2E16755269E6716C22074D6BC0A9099915E67849 (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::MoveNext()
inline bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06 (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
inline JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t01DB320267C848E729A400EF2345979978F851D2 (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
inline bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniRx.SingleAssignmentDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable__ctor_m89E11F2E587AD79449A2B7580E74957483186341 (SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D* __this, const RuntimeMethod* method) ;
// System.Void UniRx.SingleAssignmentDisposable::set_Disposable(System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable_set_Disposable_m730618B112217AD82C9F4B2911BE5C618A4B57A9 (SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mE6FE7DE8D021D587C179D6530AC57941CD9AF05F (RuntimeObject* ___0_disposable1, RuntimeObject* ___1_disposable2, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IDisposable UniRx.Disposable::Create(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Disposable_Create_m82A6DBA793F311771D19B0F319A2D099F910AF13 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_disposeAction, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::CreateUnsafe(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_CreateUnsafe_m695F8AA1079E83184361F05CD3CD036A0EDBFE41 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___0_disposables, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mE13AE8E8BD2E4EAC714922D7AEC0ED5871AD37D1 (RuntimeObject* ___0_disposable1, RuntimeObject* ___1_disposable2, RuntimeObject* ___2_disposable3, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mB8AF85AE2ECD4FCFA60F1A7AAA6B1AFFF4472C2C (RuntimeObject* ___0_disposable1, RuntimeObject* ___1_disposable2, RuntimeObject* ___2_disposable3, RuntimeObject* ___3_disposable4, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m5C76D7FCA29AC1D50F9F48269C0104ED0BEDEA87 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___0_disposables, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___0_source, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___1_predicate, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7F15BA24C1AD78593E0EFF5AA8220436BDB66612_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* L_3 = (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m56890DBD7344EE51AE2457C222E70BE9AF955C00_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_11 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m873C15FE36A52528B396D6A1919D572AFDCA52B6_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m1509E7222F78F6B89F836EA7A8742EBDFFC020F9_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* L_3 = (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF219C7B364CA9F7692179ED01E1588FD7862A585_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_11 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF790B9A9E8480C2654B0FA2B916F50565B9831F1_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereSelectObservable`2<System.Int64,System.Boolean>::.ctor(UniRx.IObservable`1<T>,System.Func`2<T,System.Boolean>,System.Func`2<T,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_m36722F3DF78D3C3B0DAECEC80BF0A6D82175E102_gshared (WhereSelectObservable_2_t4E161F7E0C70C166DCDF0990F7F17BE515158173* __this, RuntimeObject* ___0_source, Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* ___1_predicate, Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* ___2_selector, const RuntimeMethod* method) 
{
	{
		// : base(source.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_source;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (OperatorObservableBase_1_t2711435009297E2BA306F783392B88842A12E7D2*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((OperatorObservableBase_1_t2711435009297E2BA306F783392B88842A12E7D2*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		// this.source = source;
		RuntimeObject* L_2 = ___0_source;
		__this->___source_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_2);
		// this.predicate = predicate;
		Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* L_3 = ___1_predicate;
		__this->___predicate_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_3);
		// this.selector = selector;
		Func_2_t17A7605CEEC6FA7EC6BDEFDBAD916217CEEB6710* L_4 = ___2_selector;
		__this->___selector_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhereSelectObservable`2<System.Int64,System.Boolean>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_mEB6A66B684B993A8D613A36B1E892C5348888E97_gshared (WhereSelectObservable_2_t4E161F7E0C70C166DCDF0990F7F17BE515158173* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return source.Subscribe(new WhereSelect(this, observer, cancel));
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_1;
		RuntimeObject* L_1 = ___0_observer;
		RuntimeObject* L_2 = ___1_cancel;
		WhereSelect_t2C28971FEA49D168CA78FFFEE452245210FC1ADC* L_3 = (WhereSelect_t2C28971FEA49D168CA78FFFEE452245210FC1ADC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		((  void (*) (WhereSelect_t2C28971FEA49D168CA78FFFEE452245210FC1ADC*, WhereSelectObservable_2_t4E161F7E0C70C166DCDF0990F7F17BE515158173*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_3, __this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Int64>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, (RuntimeObject*)L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>::.ctor(UniRx.IObservable`1<T>,System.Func`2<T,System.Boolean>,System.Func`2<T,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_m810824F0DD0CAF17BE6F26C129A88D6B9E1371A4_gshared (WhereSelectObservable_2_t971CA3D42F2D0DBC72264F0D247AFBCF545C5365* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___2_selector, const RuntimeMethod* method) 
{
	{
		// : base(source.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_source;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (OperatorObservableBase_1_t2711435009297E2BA306F783392B88842A12E7D2*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((OperatorObservableBase_1_t2711435009297E2BA306F783392B88842A12E7D2*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		// this.source = source;
		RuntimeObject* L_2 = ___0_source;
		__this->___source_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_2);
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = ___1_predicate;
		__this->___predicate_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_3);
		// this.selector = selector;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_4 = ___2_selector;
		__this->___selector_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhereSelectObservable`2<System.Object,System.Boolean>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_m89D242EA71ED3C09FB5A4CDC133EE1DCC24A0E74_gshared (WhereSelectObservable_2_t971CA3D42F2D0DBC72264F0D247AFBCF545C5365* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return source.Subscribe(new WhereSelect(this, observer, cancel));
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_1;
		RuntimeObject* L_1 = ___0_observer;
		RuntimeObject* L_2 = ___1_cancel;
		WhereSelect_t732F6106FBA5511149B3AAD148405FF7149AA2D9* L_3 = (WhereSelect_t732F6106FBA5511149B3AAD148405FF7149AA2D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		((  void (*) (WhereSelect_t732F6106FBA5511149B3AAD148405FF7149AA2D9*, WhereSelectObservable_2_t971CA3D42F2D0DBC72264F0D247AFBCF545C5365*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_3, __this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, (RuntimeObject*)L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>::.ctor(UniRx.IObservable`1<T>,System.Func`2<T,System.Boolean>,System.Func`2<T,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_m00DFC56B0B97674ADC3F6520DCAB0DE8A94ED117_gshared (WhereSelectObservable_2_tF48E3A014E6FB5B64661B21629592A8E8DE74329* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		// : base(source.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_source;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		// this.source = source;
		RuntimeObject* L_2 = ___0_source;
		__this->___source_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_2);
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = ___1_predicate;
		__this->___predicate_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_3);
		// this.selector = selector;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_4 = ___2_selector;
		__this->___selector_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhereSelectObservable`2<System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_m18512EED49ADBE1821B017CB798F5CEE45C815C8_gshared (WhereSelectObservable_2_tF48E3A014E6FB5B64661B21629592A8E8DE74329* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return source.Subscribe(new WhereSelect(this, observer, cancel));
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_1;
		RuntimeObject* L_1 = ___0_observer;
		RuntimeObject* L_2 = ___1_cancel;
		WhereSelect_tE6E032FDB820A8ECE532FAF200662BD62ADF6A3A* L_3 = (WhereSelect_tE6E032FDB820A8ECE532FAF200662BD62ADF6A3A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		((  void (*) (WhereSelect_tE6E032FDB820A8ECE532FAF200662BD62ADF6A3A*, WhereSelectObservable_2_tF48E3A014E6FB5B64661B21629592A8E8DE74329*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_3, __this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, (RuntimeObject*)L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereSelectObservable`2<UniRx.Unit,System.Object>::.ctor(UniRx.IObservable`1<T>,System.Func`2<T,System.Boolean>,System.Func`2<T,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_mE906F4D86670BE0D3FFA0152B57FCB5BE10AA2AA_gshared (WhereSelectObservable_2_t58FBFB35A0F8976403CB3B8A4CEF592C54695C4A* __this, RuntimeObject* ___0_source, Func_2_tCA33FD1D4912A4D1FC696C8B08D4D97A884F2E52* ___1_predicate, Func_2_t7F570F6D11A5A38730A27330374171BB45498FA4* ___2_selector, const RuntimeMethod* method) 
{
	{
		// : base(source.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_source;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		// this.source = source;
		RuntimeObject* L_2 = ___0_source;
		__this->___source_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_2);
		// this.predicate = predicate;
		Func_2_tCA33FD1D4912A4D1FC696C8B08D4D97A884F2E52* L_3 = ___1_predicate;
		__this->___predicate_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_3);
		// this.selector = selector;
		Func_2_t7F570F6D11A5A38730A27330374171BB45498FA4* L_4 = ___2_selector;
		__this->___selector_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhereSelectObservable`2<UniRx.Unit,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_m9FB33B7636BF3F3693AD7F1CA7652F94D08B4590_gshared (WhereSelectObservable_2_t58FBFB35A0F8976403CB3B8A4CEF592C54695C4A* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return source.Subscribe(new WhereSelect(this, observer, cancel));
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_1;
		RuntimeObject* L_1 = ___0_observer;
		RuntimeObject* L_2 = ___1_cancel;
		WhereSelect_t440F87713DA1A8FC4D1399AE7C58249D0975CF80* L_3 = (WhereSelect_t440F87713DA1A8FC4D1399AE7C58249D0975CF80*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		((  void (*) (WhereSelect_t440F87713DA1A8FC4D1399AE7C58249D0975CF80*, WhereSelectObservable_2_t58FBFB35A0F8976403CB3B8A4CEF592C54695C4A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_3, __this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<UniRx.Unit>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, (RuntimeObject*)L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Boolean>::.ctor(UniRx.Operators.WhereObservable`1<T>,UniRx.IObserver`1<T>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_mB491A34C726BB53EDE7FFBA0D087B287BDEDB3E8_gshared (Where__t8AB6CCEA5CDBCA6C3653C340AFC2B682F179A1BA* __this, WhereObservable_1_t8E41D4DD201D2291ED468DE50BB5667FAFD0039D* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		// : base(observer, cancel)
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WhereObservable_1_t8E41D4DD201D2291ED468DE50BB5667FAFD0039D* L_2 = ___0_parent;
		__this->___parent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_2);
		// this.index = 0;
		__this->___index_3 = 0;
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Boolean>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_mD218B6B2071F432AA127BF89DB17ABD057EBD304_gshared (Where__t8AB6CCEA5CDBCA6C3653C340AFC2B682F179A1BA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var isPassed = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// isPassed = parent.predicateWithIndex(value, index++);
		WhereObservable_1_t8E41D4DD201D2291ED468DE50BB5667FAFD0039D* L_0 = (WhereObservable_1_t8E41D4DD201D2291ED468DE50BB5667FAFD0039D*)__this->___parent_2;
		NullCheck(L_0);
		Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1* L_1 = (Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1*)L_0->___predicateWithIndex_3;
		bool L_2 = ___0_value;
		int32_t L_3 = (int32_t)__this->___index_3;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_t6CA5B8FD3E304C3B8E6B052DBBFC7890F08FF0B1*, bool, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_6;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{// begin finally (depth: 2)
					// try { observer.OnError(ex); } finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this);
					((  void (*) (OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
					// try { observer.OnError(ex); } finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); } finally { Dispose(); }
				RuntimeObject* L_7 = (RuntimeObject*)((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Boolean>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, L_8);
				// try { observer.OnError(ex); } finally { Dispose(); }
				goto IL_003f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (isPassed)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// observer.OnNext(value);
		RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		bool L_11 = ___0_value;
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Boolean>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, L_11);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Boolean>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_mEE6F60A0ADCC2079755C530169F88713497A6140_gshared (Where__t8AB6CCEA5CDBCA6C3653C340AFC2B682F179A1BA* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this);
				((  void (*) (OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnError(error); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Boolean>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, L_1);
			// try { observer.OnError(error); } finally { Dispose(); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Boolean>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m960ED95849A5666947655C371772364541B8E8A3_gshared (Where__t8AB6CCEA5CDBCA6C3653C340AFC2B682F179A1BA* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this);
				((  void (*) (OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnCompleted(); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t4D4CD1FF68304CEA9A2E6C6C9B47881095E6B5AD*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Boolean>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			// try { observer.OnCompleted(); } finally { Dispose(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Int64>::.ctor(UniRx.Operators.WhereObservable`1<T>,UniRx.IObserver`1<T>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_m7655C5ECE8238FF5D187BFCA6638D00A5F67C29B_gshared (Where__t01D82444F84C565AD2C05258ABDB5A8206818FB8* __this, WhereObservable_1_tD6DC7230E61047DA810CEE3B3936FA5204C9E5F1* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		// : base(observer, cancel)
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WhereObservable_1_tD6DC7230E61047DA810CEE3B3936FA5204C9E5F1* L_2 = ___0_parent;
		__this->___parent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_2);
		// this.index = 0;
		__this->___index_3 = 0;
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Int64>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_mDCA89A2F1A6EE84BB948BC42D4F0C5753C50F3F9_gshared (Where__t01D82444F84C565AD2C05258ABDB5A8206818FB8* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var isPassed = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// isPassed = parent.predicateWithIndex(value, index++);
		WhereObservable_1_tD6DC7230E61047DA810CEE3B3936FA5204C9E5F1* L_0 = (WhereObservable_1_tD6DC7230E61047DA810CEE3B3936FA5204C9E5F1*)__this->___parent_2;
		NullCheck(L_0);
		Func_3_t1EBA448966CEA92A481CE27F7CEA5EA6E5EE423A* L_1 = (Func_3_t1EBA448966CEA92A481CE27F7CEA5EA6E5EE423A*)L_0->___predicateWithIndex_3;
		int64_t L_2 = ___0_value;
		int32_t L_3 = (int32_t)__this->___index_3;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_t1EBA448966CEA92A481CE27F7CEA5EA6E5EE423A*, int64_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_6;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{// begin finally (depth: 2)
					// try { observer.OnError(ex); } finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this);
					((  void (*) (OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
					// try { observer.OnError(ex); } finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); } finally { Dispose(); }
				RuntimeObject* L_7 = (RuntimeObject*)((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Int64>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, L_8);
				// try { observer.OnError(ex); } finally { Dispose(); }
				goto IL_003f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (isPassed)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// observer.OnNext(value);
		RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		int64_t L_11 = ___0_value;
		NullCheck(L_10);
		InterfaceActionInvoker1< int64_t >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Int64>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, L_11);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Int64>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m9F432EC2B4933FF99425BBA957E304C88F334B59_gshared (Where__t01D82444F84C565AD2C05258ABDB5A8206818FB8* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this);
				((  void (*) (OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnError(error); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Int64>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, L_1);
			// try { observer.OnError(error); } finally { Dispose(); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Int64>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m2F076F5FEA97D95B6818896A4EEC341CC91D6298_gshared (Where__t01D82444F84C565AD2C05258ABDB5A8206818FB8* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this);
				((  void (*) (OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnCompleted(); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t6920E7D34392715A9F29DBD5128B347DA728F188*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Int64>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			// try { observer.OnCompleted(); } finally { Dispose(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereObservable`1/Where_<UniRx.Diagnostics.LogEntry>::.ctor(UniRx.Operators.WhereObservable`1<T>,UniRx.IObserver`1<T>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_m47FE701F14BEB33EC23D4D4DF2FB21DF544D4901_gshared (Where__t5B22458E35158F7E267F543BA29F54285D0A3706* __this, WhereObservable_1_tD90F9B289C8E213EC70B3B2B940A16E903FE043D* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		// : base(observer, cancel)
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WhereObservable_1_tD90F9B289C8E213EC70B3B2B940A16E903FE043D* L_2 = ___0_parent;
		__this->___parent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_2);
		// this.index = 0;
		__this->___index_3 = 0;
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<UniRx.Diagnostics.LogEntry>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_m350B643ECB6C53CEC8F25758C3D77F54D47AEB0D_gshared (Where__t5B22458E35158F7E267F543BA29F54285D0A3706* __this, LogEntry_t754E120559F62761C680987B249717A27E0F3223 ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var isPassed = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// isPassed = parent.predicateWithIndex(value, index++);
		WhereObservable_1_tD90F9B289C8E213EC70B3B2B940A16E903FE043D* L_0 = (WhereObservable_1_tD90F9B289C8E213EC70B3B2B940A16E903FE043D*)__this->___parent_2;
		NullCheck(L_0);
		Func_3_t0E8D5F73B938C445CEB91AEAC8EDF6204E295E15* L_1 = (Func_3_t0E8D5F73B938C445CEB91AEAC8EDF6204E295E15*)L_0->___predicateWithIndex_3;
		LogEntry_t754E120559F62761C680987B249717A27E0F3223 L_2 = ___0_value;
		int32_t L_3 = (int32_t)__this->___index_3;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_t0E8D5F73B938C445CEB91AEAC8EDF6204E295E15*, LogEntry_t754E120559F62761C680987B249717A27E0F3223, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_6;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{// begin finally (depth: 2)
					// try { observer.OnError(ex); } finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this);
					((  void (*) (OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
					// try { observer.OnError(ex); } finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); } finally { Dispose(); }
				RuntimeObject* L_7 = (RuntimeObject*)((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<UniRx.Diagnostics.LogEntry>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, L_8);
				// try { observer.OnError(ex); } finally { Dispose(); }
				goto IL_003f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (isPassed)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// observer.OnNext(value);
		RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		LogEntry_t754E120559F62761C680987B249717A27E0F3223 L_11 = ___0_value;
		NullCheck(L_10);
		InterfaceActionInvoker1< LogEntry_t754E120559F62761C680987B249717A27E0F3223 >::Invoke(2 /* System.Void UniRx.IObserver`1<UniRx.Diagnostics.LogEntry>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, L_11);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<UniRx.Diagnostics.LogEntry>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_mCE7CBDC3D206863B56D143F9366B92611709ACE8_gshared (Where__t5B22458E35158F7E267F543BA29F54285D0A3706* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this);
				((  void (*) (OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnError(error); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<UniRx.Diagnostics.LogEntry>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, L_1);
			// try { observer.OnError(error); } finally { Dispose(); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<UniRx.Diagnostics.LogEntry>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m2EC3DE10518501CCDBF0EEE19644EA51CE35DE63_gshared (Where__t5B22458E35158F7E267F543BA29F54285D0A3706* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this);
				((  void (*) (OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnCompleted(); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tA977B312B538F8C5CA17C1A8D532B005CA2C888D*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<UniRx.Diagnostics.LogEntry>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			// try { observer.OnCompleted(); } finally { Dispose(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Object>::.ctor(UniRx.Operators.WhereObservable`1<T>,UniRx.IObserver`1<T>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_m1E206B71442A52DE225ECC8CF79207ABDC528B66_gshared (Where__tCC8C37A381BD094FEE71E776C5F85D23571B414E* __this, WhereObservable_1_t6EEAB8AAF13EEEF3D36844B38AA0485B62A3EDF7* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		// : base(observer, cancel)
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WhereObservable_1_t6EEAB8AAF13EEEF3D36844B38AA0485B62A3EDF7* L_2 = ___0_parent;
		__this->___parent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_2);
		// this.index = 0;
		__this->___index_3 = 0;
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_mEE674E4405502A10FCC728E360FAA4E99E2E6394_gshared (Where__tCC8C37A381BD094FEE71E776C5F85D23571B414E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var isPassed = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// isPassed = parent.predicateWithIndex(value, index++);
		WhereObservable_1_t6EEAB8AAF13EEEF3D36844B38AA0485B62A3EDF7* L_0 = (WhereObservable_1_t6EEAB8AAF13EEEF3D36844B38AA0485B62A3EDF7*)__this->___parent_2;
		NullCheck(L_0);
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)L_0->___predicateWithIndex_3;
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3 = (int32_t)__this->___index_3;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_6;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{// begin finally (depth: 2)
					// try { observer.OnError(ex); } finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
					((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
					// try { observer.OnError(ex); } finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); } finally { Dispose(); }
				RuntimeObject* L_7 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, L_8);
				// try { observer.OnError(ex); } finally { Dispose(); }
				goto IL_003f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (isPassed)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// observer.OnNext(value);
		RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_11 = ___0_value;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, L_11);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m14550076E8BE806B0B3D4882D829AA9E8BF5E253_gshared (Where__tCC8C37A381BD094FEE71E776C5F85D23571B414E* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnError(error); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, L_1);
			// try { observer.OnError(error); } finally { Dispose(); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m3E9810E2B58FE9E5E99A9369523F857A2DCC48D1_gshared (Where__tCC8C37A381BD094FEE71E776C5F85D23571B414E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnCompleted(); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			// try { observer.OnCompleted(); } finally { Dispose(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WhereObservable`1/Where_<UniRx.Unit>::.ctor(UniRx.Operators.WhereObservable`1<T>,UniRx.IObserver`1<T>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_mFA0D8E7E4998EA5BE82697CAEDB88BF182D418D2_gshared (Where__t2166903E7E3FDA2C73CC019AF885996CE6B6845E* __this, WhereObservable_1_t63D056F67050D8C9679D6D825F7319C87CE6237C* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		// : base(observer, cancel)
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WhereObservable_1_t63D056F67050D8C9679D6D825F7319C87CE6237C* L_2 = ___0_parent;
		__this->___parent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_2);
		// this.index = 0;
		__this->___index_3 = 0;
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<UniRx.Unit>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_m58078138C52158EA47852651C5AB45FA668A54A0_gshared (Where__t2166903E7E3FDA2C73CC019AF885996CE6B6845E* __this, Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791 ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var isPassed = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// isPassed = parent.predicateWithIndex(value, index++);
		WhereObservable_1_t63D056F67050D8C9679D6D825F7319C87CE6237C* L_0 = (WhereObservable_1_t63D056F67050D8C9679D6D825F7319C87CE6237C*)__this->___parent_2;
		NullCheck(L_0);
		Func_3_tB86ACE009280215E8778D2284CB40C372B48282C* L_1 = (Func_3_tB86ACE009280215E8778D2284CB40C372B48282C*)L_0->___predicateWithIndex_3;
		Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791 L_2 = ___0_value;
		int32_t L_3 = (int32_t)__this->___index_3;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_tB86ACE009280215E8778D2284CB40C372B48282C*, Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_6;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{// begin finally (depth: 2)
					// try { observer.OnError(ex); } finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this);
					((  void (*) (OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
					// try { observer.OnError(ex); } finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); } finally { Dispose(); }
				RuntimeObject* L_7 = (RuntimeObject*)((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<UniRx.Unit>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, L_8);
				// try { observer.OnError(ex); } finally { Dispose(); }
				goto IL_003f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (isPassed)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// observer.OnNext(value);
		RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791 L_11 = ___0_value;
		NullCheck(L_10);
		InterfaceActionInvoker1< Unit_t299D119C1C8380F867E26BF6D8D42280B90D4791 >::Invoke(2 /* System.Void UniRx.IObserver`1<UniRx.Unit>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_10, L_11);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<UniRx.Unit>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m2738373CE813A357ED1ABFC6A09D5AD90EAF2F65_gshared (Where__t2166903E7E3FDA2C73CC019AF885996CE6B6845E* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this);
				((  void (*) (OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnError(error); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<UniRx.Unit>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0, L_1);
			// try { observer.OnError(error); } finally { Dispose(); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<UniRx.Unit>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_m41BE841D0F39E18BAE437A63CF9860B5612266CA_gshared (Where__t2166903E7E3FDA2C73CC019AF885996CE6B6845E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this);
				((  void (*) (OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				// try { observer.OnCompleted(); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t881CF219EE26E53C0950C9DA3871A7337EA32D94*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<UniRx.Unit>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			// try { observer.OnCompleted(); } finally { Dispose(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.WithLatestFromObservable`3<TLeft,TRight,TResult>,UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom__ctor_mC11007A14CB81C95824C63F1D2304A6C15130624_gshared (WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946* __this, WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public WithLatestFrom(WithLatestFromObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___1_observer;
		RuntimeObject* L_2 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* L_3 = ___0_parent;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithLatestFrom_Run_m9D76B193D736D2812152FBD3132DBC4C33A7296A_gshared (WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftObserver(this));
		WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* L_0 = (WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022*)__this->___parent_2;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftObserver_t5EDE270B219930A3D7C05CAAC0B0DD20918F62C0* L_2 = (LeftObserver_t5EDE270B219930A3D7C05CAAC0B0DD20918F62C0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (LeftObserver_t5EDE270B219930A3D7C05CAAC0B0DD20918F62C0*, WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, (RuntimeObject*)L_2);
		// var rSubscription = new SingleAssignmentDisposable();
		SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D* L_4 = (SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D*)il2cpp_codegen_object_new(SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SingleAssignmentDisposable__ctor_m89E11F2E587AD79449A2B7580E74957483186341(L_4, NULL);
		V_0 = L_4;
		// rSubscription.Disposable  = parent.right.Subscribe(new RightObserver(this, rSubscription));
		SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D* L_5 = V_0;
		WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* L_6 = (WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022*)__this->___parent_2;
		NullCheck(L_6);
		RuntimeObject* L_7 = (RuntimeObject*)L_6->___right_2;
		SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D* L_8 = V_0;
		RightObserver_tBA7F5E6498E977DE62E014CD8EF532440BFF5759* L_9 = (RightObserver_tBA7F5E6498E977DE62E014CD8EF532440BFF5759*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_9);
		((  void (*) (RightObserver_tBA7F5E6498E977DE62E014CD8EF532440BFF5759*, WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_9, __this, (RuntimeObject*)L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_7, (RuntimeObject*)L_9);
		NullCheck(L_5);
		SingleAssignmentDisposable_set_Disposable_m730618B112217AD82C9F4B2911BE5C618A4B57A9(L_5, L_10, NULL);
		// return StableCompositeDisposable.Create(l, rSubscription);
		SingleAssignmentDisposable_tF2A7DDA871E205F335EFE2B2895D1D2C16288A2D* L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = StableCompositeDisposable_Create_mE6FE7DE8D021D587C179D6530AC57941CD9AF05F(L_3, (RuntimeObject*)L_11, NULL);
		return (RuntimeObject*)L_12;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnNext_mF17D4124E531D1EA1FC0B83A2067CAB06037B405_gshared (WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnError_m8296447D18E47117CB984481CF2AFA0454B5A67E_gshared (WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnCompleted_m3984D4148A4D59A58AAF684289A7F740A0C9996E_gshared (WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<TLeft>,UniRx.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFromObservable_3__ctor_m99D249B96A5985D4F1E0E4A1817301A348275B67_gshared (WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_selector, const RuntimeMethod* method) 
{
	WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* G_B2_0 = NULL;
	WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___0_left;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___1_right;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___2_selector;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WithLatestFromObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithLatestFromObservable_3_SubscribeCore_mEBC2ECE0FFDCEABBC3205594BFD86B1E0599BF5F_gshared (WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new WithLatestFrom(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946* L_2 = (WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946*, WithLatestFromObservable_3_t995B7FF9E8C61C34B29EA5D850C298B776209022*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (WithLatestFrom_t677506CA865A5199056B7D0F6D8F36AB1D06A946*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystem_1_get_running_m284E6EF0F9D39E4F91603ABE3B8FAE908256E23F_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		// public sealed override bool running => m_Running;
		bool L_0 = (bool)__this->___m_Running_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_m191F16361FFA25DEA1B40B1C80F23EF4A0DCBDC0_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		// Stop();
		NullCheck((Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7*)__this);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7*)__this);
		// OnDestroyed();
		VirtualActionInvoker0::Invoke(13 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroyed() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_mA3960C71702649406793A8BD120A39116692F6B4_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		// if (!m_Running)
		bool L_0 = (bool)__this->___m_Running_0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStart();
		VirtualActionInvoker0::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStart() */, __this);
	}

IL_000e:
	{
		// m_Running = true;
		__this->___m_Running_0 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mC84E118BD0132E1B577E6460AF15392FE390AD0D_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Running)
		bool L_0 = (bool)__this->___m_Running_0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStop();
		VirtualActionInvoker0::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStop() */, __this);
	}

IL_000e:
	{
		// m_Running = false;
		__this->___m_Running_0 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_mF22713FB460E4026D6AC9974F6DD9DBED5EA08CD_gshared (XRSubsystem_1_tE79C39F057DC70EEF40AB0F327DDDF8CC6E3E249* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Subsystem_1_t75B62C9B687446D6D9E3C8FB0A841F2CC5A174C8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::.ctor(UniRx.Operators.ZipObservable`1<T>,UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m067A12DF7BF7F52047D35BB33C4C50E986041306_gshared (Zip_t0769F5A976AE22001B72090856BA389A396B4886* __this, ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public Zip(ZipObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___1_observer;
		RuntimeObject* L_2 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* L_3 = ___0_parent;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1/Zip<System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mBF27F79B2ACC1666B145EBB5927F42400ABFC260_gshared (Zip_t0769F5A976AE22001B72090856BA389A396B4886* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// length = parent.sources.Length;
		ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* L_0 = (ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7*)__this->___parent_2;
		NullCheck(L_0);
		IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* L_1 = (IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99*)L_0->___sources_1;
		NullCheck(L_1);
		__this->___length_6 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// queues = new Queue<T>[length];
		int32_t L_2 = (int32_t)__this->___length_6;
		Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_3 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)(Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_2);
		__this->___queues_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queues_4), (void*)L_3);
		// isDone = new bool[length];
		int32_t L_4 = (int32_t)__this->___length_6;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___isDone_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isDone_5), (void*)L_5);
		// for (int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_004a;
	}

IL_0039:
	{
		// queues[i] = new Queue<T>();
		Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_6 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)__this->___queues_4;
		int32_t L_7 = V_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_8);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)L_8);
		// for (int i = 0; i < length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)__this->___length_6;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		// var disposables = new IDisposable[length + 1];
		int32_t L_12 = (int32_t)__this->___length_6;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_13 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_12, 1)));
		V_0 = L_13;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_0087;
	}

IL_0065:
	{
		// var source = parent.sources[i];
		ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* L_14 = (ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7*)__this->___parent_2;
		NullCheck(L_14);
		IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* L_15 = (IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99*)L_14->___sources_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = L_18;
		// disposables[i] = source.Subscribe(new ZipObserver(this, i));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_19 = V_0;
		int32_t L_20 = V_2;
		RuntimeObject* L_21 = V_3;
		int32_t L_22 = V_2;
		ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* L_23 = (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_23);
		((  void (*) (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5*, Zip_t0769F5A976AE22001B72090856BA389A396B4886*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_23, __this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_21);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_21, (RuntimeObject*)L_23);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)L_24);
		// for (int i = 0; i < length; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_26 = V_2;
		int32_t L_27 = (int32_t)__this->___length_6;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0065;
		}
	}
	{
		// disposables[length] = Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         for (int i = 0; i < length; i++)
		//         {
		//             var q = queues[i];
		//             q.Clear();
		//         }
		//     }
		// });
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_28 = V_0;
		int32_t L_29 = (int32_t)__this->___length_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_30, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 9)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Disposable_Create_m82A6DBA793F311771D19B0F319A2D099F910AF13(L_30, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (RuntimeObject*)L_31);
		// return StableCompositeDisposable.CreateUnsafe(disposables);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_32 = V_0;
		RuntimeObject* L_33;
		L_33 = StableCompositeDisposable_CreateUnsafe_m695F8AA1079E83184361F05CD3CD036A0EDBFE41(L_32, NULL);
		return (RuntimeObject*)L_33;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::Dequeue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_Dequeue_m9EB6FB3D93E4CB6051B7E899BF0731E112D2D0DF_gshared (Zip_t0769F5A976AE22001B72090856BA389A396B4886* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var allQueueHasValue = true;
		V_0 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_001d;
	}

IL_0006:
	{
		// if (queues[i].Count == 0)
		Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_0 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)__this->___queues_4;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		// allQueueHasValue = false;
		V_0 = (bool)0;
		// break;
		goto IL_0026;
	}

IL_0019:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_6 = V_2;
		int32_t L_7 = (int32_t)__this->___length_6;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}

IL_0026:
	{
		// if (!allQueueHasValue)
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_006f;
		}
	}
	{
		// var allCompletedWithoutSelf = true;
		V_3 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_4 = 0;
		goto IL_004a;
	}

IL_0030:
	{
		// if (i == index) continue;
		int32_t L_9 = V_4;
		int32_t L_10 = ___0_index;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0044;
		}
	}
	{
		// if (!isDone[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isDone_5;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (uint8_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0044;
		}
	}
	{
		// allCompletedWithoutSelf = false;
		V_3 = (bool)0;
		// break;
		goto IL_0054;
	}

IL_0044:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_16 = V_4;
		int32_t L_17 = (int32_t)__this->___length_6;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0030;
		}
	}

IL_0054:
	{
		// if (allCompletedWithoutSelf)
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
				((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_19 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_19);
			// try { observer.OnCompleted(); }
			goto IL_006d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// return;
		return;
	}

IL_006e:
	{
		// return;
		return;
	}

IL_006f:
	{
		// var array = new T[length];
		int32_t L_20 = (int32_t)__this->___length_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 14), (uint32_t)L_20);
		V_1 = L_21;
		// for (int i = 0; i < length; i++)
		V_5 = 0;
		goto IL_009c;
	}

IL_0080:
	{
		// array[i] = queues[i].Dequeue();
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_1;
		int32_t L_23 = V_5;
		Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_24 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)__this->___queues_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject*)L_28);
		// for (int i = 0; i < length; i++)
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009c:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_30 = V_5;
		int32_t L_31 = (int32_t)__this->___length_6;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0080;
		}
	}
	{
		// OnNext(array);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = V_1;
		NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnNext(TSource) */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, (RuntimeObject*)L_32);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::OnNext(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m0431D8B7EBD46FEDD07E22A271BFD37B39E084E4_gshared (Zip_t0769F5A976AE22001B72090856BA389A396B4886* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m969F9156BA81AB0A23EC10F5EB3B7344EC61E02A_gshared (Zip_t0769F5A976AE22001B72090856BA389A396B4886* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
				((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_mDB51429C727EA0E65FA910F549F4F8389D54798C_gshared (Zip_t0769F5A976AE22001B72090856BA389A396B4886* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
				((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<System.Object>::<Run>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__6_0_mB540CA6144A092E7A37E9A8833CBB82003A7EC4F_gshared (Zip_t0769F5A976AE22001B72090856BA389A396B4886* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// for (int i = 0; i < length; i++)
				V_2 = 0;
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var q = queues[i];
				Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_4 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)__this->___queues_4;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				// q.Clear();
				NullCheck(L_7);
				((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				// for (int i = 0; i < length; i++)
				int32_t L_8 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0026_1:
			{
				// for (int i = 0; i < length; i++)
				int32_t L_9 = V_2;
				int32_t L_10 = (int32_t)__this->___length_6;
				if ((((int32_t)L_9) < ((int32_t)L_10)))
				{
					goto IL_0015_1;
				}
			}
			{
				// }
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult>,UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m1AD54689CB65916FC6637EFBA525CA298AF1F678_gshared (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* __this, ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// readonly Queue<TLeft> leftQ = new Queue<TLeft>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___leftQ_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftQ_4), (void*)L_1);
		// readonly Queue<TRight> rightQ = new Queue<TRight>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___rightQ_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightQ_6), (void*)L_2);
		// : base(observer, cancel)
		RuntimeObject* L_3 = ___1_observer;
		RuntimeObject* L_4 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.parent = parent;
		ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* L_5 = ___0_parent;
		__this->___parent_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_5);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m9F31F80E161C9B873891A199F4B2874A241FCF77_gshared (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftZipObserver(this));
		ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* L_0 = (ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE*)__this->___parent_2;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftZipObserver_tC9DAE7FD6E0A2DB6B96DE9D3AB9EA92E91AE7522* L_2 = (LeftZipObserver_tC9DAE7FD6E0A2DB6B96DE9D3AB9EA92E91AE7522*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (LeftZipObserver_tC9DAE7FD6E0A2DB6B96DE9D3AB9EA92E91AE7522*, Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_1, (RuntimeObject*)L_2);
		// var r = parent.right.Subscribe(new RightZipObserver(this));
		ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* L_4 = (ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE*)__this->___parent_2;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___right_2;
		RightZipObserver_tD5774B598012017D7AB74E6B6CA0F4732E397A4F* L_6 = (RightZipObserver_tD5774B598012017D7AB74E6B6CA0F4732E397A4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_6);
		((  void (*) (RightZipObserver_tD5774B598012017D7AB74E6B6CA0F4732E397A4F*, Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_6, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5, (RuntimeObject*)L_6);
		V_0 = L_7;
		// return StableCompositeDisposable.Create(l, r, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         leftQ.Clear();
		//         rightQ.Clear();
		//     }
		// }));
		RuntimeObject* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 14)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = Disposable_Create_m82A6DBA793F311771D19B0F319A2D099F910AF13(L_9, NULL);
		RuntimeObject* L_11;
		L_11 = StableCompositeDisposable_Create_mE13AE8E8BD2E4EAC714922D7AEC0ED5871AD37D1(L_3, L_8, L_10, NULL);
		return (RuntimeObject*)L_11;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_Dequeue_m00649602EE658A20B215D8FCD34514087A204D69_gshared (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (leftQ.Count != 0 && rightQ.Count != 0)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___leftQ_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___rightQ_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// lv = leftQ.Dequeue();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___leftQ_4;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_0 = L_5;
		// rv = rightQ.Dequeue();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___rightQ_6;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_1 = L_7;
		goto IL_005d;
	}

IL_0034:
	{
		// else if (leftCompleted || rightCompleted)
		bool L_8 = (bool)__this->___leftCompleted_5;
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		bool L_9 = (bool)__this->___rightCompleted_7;
		if (!L_9)
		{
			goto IL_005c;
		}
	}

IL_0044:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_10);
			// try { observer.OnCompleted(); }
			goto IL_005b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// return;
		return;
	}

IL_005c:
	{
		// return;
		return;
	}

IL_005d:
	{
	}
	try
	{// begin try (depth: 1)
		// v = parent.selector(lv, rv);
		ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* L_11 = (ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE*)__this->___parent_2;
		NullCheck(L_11);
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_12 = (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*)L_11->___selector_3;
		RuntimeObject* L_13 = V_0;
		RuntimeObject* L_14 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_12, L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_2 = L_15;
		// }
		goto IL_008d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0073;
		}
		throw e;
	}

CATCH_0073:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0084:
				{// begin finally (depth: 2)
					// finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
					((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
					// finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); }
				RuntimeObject* L_16 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_17 = V_3;
				NullCheck(L_16);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_16, L_17);
				// try { observer.OnError(ex); }
				goto IL_008b;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_008b:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0094;
		}
	}// end catch (depth: 1)

IL_008d:
	{
		// OnNext(v);
		RuntimeObject* L_18 = V_2;
		NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>::OnNext(TSource) */, (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, L_18);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m1DE17A73A6EB28DCFB8450BD425DD39D7D6C4318_gshared (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m178D97FF5EA6DA4024D0528028B6A531A317DE02_gshared (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m9059996126C0867CFBF8F18DFD67EFE9A85C09F4_gshared (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>::<Run>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__7_0_m6C35615508C15FD9B0F49289475EC69DC04FEEDD_gshared (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0032;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// leftQ.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___leftQ_4;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			// rightQ.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___rightQ_6;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
			// }
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`4<T1,T2,T3,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m93C374A37D985822162AE8E392DE219BCE2DA9F4_gshared (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* __this, ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// : base(observer, cancel)
		RuntimeObject* L_4 = ___1_observer;
		RuntimeObject* L_5 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.parent = parent;
		ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* L_6 = ___0_parent;
		__this->___parent_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m036D5E5BB6FF38F2F2299A9DEE6E52F8FBC0C413_gshared (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)3);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		NullCheck((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this);
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* L_7 = (ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88*)__this->___parent_5;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->___source1_1;
		RuntimeObject* L_9 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_11 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_11);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_11, L_9, (RuntimeObject*)__this, 0, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_8);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8, (RuntimeObject*)L_11);
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* L_13 = (ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88*)__this->___parent_5;
		NullCheck(L_13);
		RuntimeObject* L_14 = (RuntimeObject*)L_13->___source2_2;
		RuntimeObject* L_15 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_16 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_17 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_17);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_17, L_15, (RuntimeObject*)__this, 1, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_14, (RuntimeObject*)L_17);
		V_0 = L_18;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* L_19 = (ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88*)__this->___parent_5;
		NullCheck(L_19);
		RuntimeObject* L_20 = (RuntimeObject*)L_19->___source3_3;
		RuntimeObject* L_21 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_22 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_23 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_23);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_23, L_21, (RuntimeObject*)__this, 2, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_20, (RuntimeObject*)L_23);
		V_1 = L_24;
		// return StableCompositeDisposable.Create(s1, s2, s3, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear();
		//     }
		// }));
		RuntimeObject* L_25 = V_0;
		RuntimeObject* L_26 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 22)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		RuntimeObject* L_28;
		L_28 = Disposable_Create_m82A6DBA793F311771D19B0F319A2D099F910AF13(L_27, NULL);
		RuntimeObject* L_29;
		L_29 = StableCompositeDisposable_Create_mB8AF85AE2ECD4FCFA60F1A7AAA6B1AFFF4472C2C(L_12, L_25, L_26, L_28, NULL);
		return (RuntimeObject*)L_29;
	}
}
// TR UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_mDDD173626260656093C9EE887403BC26B89EE35D_gshared (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue());
		ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* L_0 = (ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* L_1 = (ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A*)L_0->___resultSelector_4;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_1);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_1, L_3, L_5, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_8;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_mDF1BCD65E3AE11F9F36E5DA5F74A683DFE399F58_gshared (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mDEC55C3E18BE0434C752B9BC847E57C44F7143CD_gshared (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m5953B1B6617CF22FB3AB914C433A72CA7B1B64E5_gshared (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>::<Run>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__6_0_m1415BF450EE89BC764C1B99F74EADF8E01EF92EF_gshared (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
			// }
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mC01BBA57D30B2D36DD74D2D8AE589F26D233BEBD_gshared (Zip_t512C02E2B1102946393817FA88F3239E9B320828* __this, ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_4);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// : base(observer, cancel)
		RuntimeObject* L_5 = ___1_observer;
		RuntimeObject* L_6 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		// this.parent = parent;
		ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* L_7 = ___0_parent;
		__this->___parent_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_7);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m25551B5A7DD8FE04A9C9A4812EE32DA8E41C2A10_gshared (Zip_t512C02E2B1102946393817FA88F3239E9B320828* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		NullCheck((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this);
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* L_9 = (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90*)__this->___parent_5;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->___source1_1;
		RuntimeObject* L_11 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_13 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_13);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_13, L_11, (RuntimeObject*)__this, 0, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_10, (RuntimeObject*)L_13);
		V_0 = L_14;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* L_15 = (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90*)__this->___parent_5;
		NullCheck(L_15);
		RuntimeObject* L_16 = (RuntimeObject*)L_15->___source2_2;
		RuntimeObject* L_17 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_18 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_19 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_19);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_19, L_17, (RuntimeObject*)__this, 1, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_16, (RuntimeObject*)L_19);
		V_1 = L_20;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* L_21 = (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90*)__this->___parent_5;
		NullCheck(L_21);
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___source3_3;
		RuntimeObject* L_23 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_24 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_25 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
		NullCheck(L_25);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_25, L_23, (RuntimeObject*)__this, 2, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		NullCheck(L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_22, (RuntimeObject*)L_25);
		V_2 = L_26;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* L_27 = (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90*)__this->___parent_5;
		NullCheck(L_27);
		RuntimeObject* L_28 = (RuntimeObject*)L_27->___source4_4;
		RuntimeObject* L_29 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_30 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_31 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_31);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_31, L_29, (RuntimeObject*)__this, 3, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_28, (RuntimeObject*)L_31);
		V_3 = L_32;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_34 = L_33;
		RuntimeObject* L_35 = V_0;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = L_34;
		RuntimeObject* L_37 = V_1;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_38 = L_36;
		RuntimeObject* L_39 = V_2;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_39);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_40 = L_38;
		RuntimeObject* L_41 = V_3;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_41);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = L_40;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_43 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_43, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 28)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		RuntimeObject* L_44;
		L_44 = Disposable_Create_m82A6DBA793F311771D19B0F319A2D099F910AF13(L_43, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_44);
		RuntimeObject* L_45;
		L_45 = StableCompositeDisposable_Create_m5C76D7FCA29AC1D50F9F48269C0104ED0BEDEA87(L_42, NULL);
		return (RuntimeObject*)L_45;
	}
}
// TR UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_m6BAB29D98E3903FE5DAC67F8656A33C289869ADB_gshared (Zip_t512C02E2B1102946393817FA88F3239E9B320828* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue());
		ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* L_0 = (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* L_1 = (ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A*)L_0->___resultSelector_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		NullCheck(L_1);
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_1, L_3, L_5, L_7, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_10;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m6CFBD08C2955631999E4A1D8EDACDE61AE65ECB6_gshared (Zip_t512C02E2B1102946393817FA88F3239E9B320828* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m82AC760D2642B6CF7AA1A49023BF3B5B671B9858_gshared (Zip_t512C02E2B1102946393817FA88F3239E9B320828* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_mBE8E2FDF1BE202BE6344441A81AB65B8B9E53C67_gshared (Zip_t512C02E2B1102946393817FA88F3239E9B320828* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__7_0_m1F2AA56D3F8BFD7C6C05B2AD9FBF2818EF66FE6B_gshared (Zip_t512C02E2B1102946393817FA88F3239E9B320828* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
			NullCheck(L_7);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			// }
			goto IL_0049;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m56DFFEEF30E96B805DC5AE0CC331398D303237CB_gshared (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* __this, ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_4);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_5);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// : base(observer, cancel)
		RuntimeObject* L_6 = ___1_observer;
		RuntimeObject* L_7 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		// this.parent = parent;
		ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* L_8 = ___0_parent;
		__this->___parent_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_8);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m02FE58AF6502F9B705839CCA15DA03CDAB061ACD_gshared (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)5);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		NullCheck((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this);
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* L_11 = (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533*)__this->___parent_5;
		NullCheck(L_11);
		RuntimeObject* L_12 = (RuntimeObject*)L_11->___source1_1;
		RuntimeObject* L_13 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_14 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_15 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_15);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_15, L_13, (RuntimeObject*)__this, 0, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_12);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_12, (RuntimeObject*)L_15);
		V_0 = L_16;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* L_17 = (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533*)__this->___parent_5;
		NullCheck(L_17);
		RuntimeObject* L_18 = (RuntimeObject*)L_17->___source2_2;
		RuntimeObject* L_19 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_20 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_21 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_21);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_21, L_19, (RuntimeObject*)__this, 1, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_18);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_18, (RuntimeObject*)L_21);
		V_1 = L_22;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* L_23 = (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533*)__this->___parent_5;
		NullCheck(L_23);
		RuntimeObject* L_24 = (RuntimeObject*)L_23->___source3_3;
		RuntimeObject* L_25 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_26 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_27 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
		NullCheck(L_27);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_27, L_25, (RuntimeObject*)__this, 2, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_24);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 24), L_24, (RuntimeObject*)L_27);
		V_2 = L_28;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* L_29 = (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533*)__this->___parent_5;
		NullCheck(L_29);
		RuntimeObject* L_30 = (RuntimeObject*)L_29->___source4_4;
		RuntimeObject* L_31 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_32 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_33 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		NullCheck(L_33);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_33, L_31, (RuntimeObject*)__this, 3, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_30);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_30, (RuntimeObject*)L_33);
		V_3 = L_34;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* L_35 = (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533*)__this->___parent_5;
		NullCheck(L_35);
		RuntimeObject* L_36 = (RuntimeObject*)L_35->___source5_5;
		RuntimeObject* L_37 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_38 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_39 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 30));
		NullCheck(L_39);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_39, L_37, (RuntimeObject*)__this, 4, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_36);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_36, (RuntimeObject*)L_39);
		V_4 = L_40;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = L_41;
		RuntimeObject* L_43 = V_0;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_43);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_44 = L_42;
		RuntimeObject* L_45 = V_1;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_45);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_46 = L_44;
		RuntimeObject* L_47 = V_2;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_47);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_48 = L_46;
		RuntimeObject* L_49 = V_3;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_49);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_50 = L_48;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_51);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_52 = L_50;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_53 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_53, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 34)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		RuntimeObject* L_54;
		L_54 = Disposable_Create_m82A6DBA793F311771D19B0F319A2D099F910AF13(L_53, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		RuntimeObject* L_55;
		L_55 = StableCompositeDisposable_Create_m5C76D7FCA29AC1D50F9F48269C0104ED0BEDEA87(L_52, NULL);
		return (RuntimeObject*)L_55;
	}
}
// TR UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_mCD004D8858CDEB352D70AEC4EA0F26B135B20A2D_gshared (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue());
		ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* L_0 = (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* L_1 = (ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702*)L_0->___resultSelector_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_1);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_1, L_3, L_5, L_7, L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return L_12;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m41420FC21A9E08FE6DC93EA750871D9C90360BBE_gshared (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m1818205B6B47A47FCCA2F3BDC1D2D6D18F2456FE_gshared (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_mFC0DE6C7790529E576DF08136F595D5171ABBD2A_gshared (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 42), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__8_0_m7BE673820E32311617969D1E84D8E2BF12AAAB96_gshared (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
			NullCheck(L_7);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
			NullCheck(L_8);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			// }
			goto IL_0054;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m0EC9B057E3E3597EABED05573D995154D9E2E211_gshared (Zip_t745351DD358D96D9C7E88E6F053D214345454584* __this, ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_4);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_5);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// readonly Queue<T6> q6 = new Queue<T6>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_6);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___q6_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q6_12), (void*)L_6);
		// : base(observer, cancel)
		RuntimeObject* L_7 = ___1_observer;
		RuntimeObject* L_8 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		// this.parent = parent;
		ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* L_9 = ___0_parent;
		__this->___parent_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m73CD778B996EADF2B6EA53227F4D9C132C795357_gshared (Zip_t745351DD358D96D9C7E88E6F053D214345454584* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5, q6 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_11 = L_9;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		NullCheck((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this);
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* L_13 = (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*)__this->___parent_5;
		NullCheck(L_13);
		RuntimeObject* L_14 = (RuntimeObject*)L_13->___source1_1;
		RuntimeObject* L_15 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_16 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_17 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_17);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_17, L_15, (RuntimeObject*)__this, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_14, (RuntimeObject*)L_17);
		V_0 = L_18;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* L_19 = (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*)__this->___parent_5;
		NullCheck(L_19);
		RuntimeObject* L_20 = (RuntimeObject*)L_19->___source2_2;
		RuntimeObject* L_21 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_22 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_23 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
		NullCheck(L_23);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_23, L_21, (RuntimeObject*)__this, 1, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		NullCheck(L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_20, (RuntimeObject*)L_23);
		V_1 = L_24;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* L_25 = (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*)__this->___parent_5;
		NullCheck(L_25);
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___source3_3;
		RuntimeObject* L_27 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_28 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_29 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_29);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_29, L_27, (RuntimeObject*)__this, 2, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_26);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_26, (RuntimeObject*)L_29);
		V_2 = L_30;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* L_31 = (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*)__this->___parent_5;
		NullCheck(L_31);
		RuntimeObject* L_32 = (RuntimeObject*)L_31->___source4_4;
		RuntimeObject* L_33 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_34 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_35 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		NullCheck(L_35);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_35, L_33, (RuntimeObject*)__this, 3, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		NullCheck(L_32);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_32, (RuntimeObject*)L_35);
		V_3 = L_36;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* L_37 = (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*)__this->___parent_5;
		NullCheck(L_37);
		RuntimeObject* L_38 = (RuntimeObject*)L_37->___source5_5;
		RuntimeObject* L_39 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_40 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_41 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
		NullCheck(L_41);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_41, L_39, (RuntimeObject*)__this, 4, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		NullCheck(L_38);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 34), L_38, (RuntimeObject*)L_41);
		V_4 = L_42;
		// var s6 = parent.source6.Subscribe(new ZipObserver<T6>(gate, this, 5, q6));
		ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* L_43 = (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*)__this->___parent_5;
		NullCheck(L_43);
		RuntimeObject* L_44 = (RuntimeObject*)L_43->___source6_6;
		RuntimeObject* L_45 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_46 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_47 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
		NullCheck(L_47);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_47, L_45, (RuntimeObject*)__this, 5, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_44);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 38), L_44, (RuntimeObject*)L_47);
		V_5 = L_48;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_50 = L_49;
		RuntimeObject* L_51 = V_0;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_52 = L_50;
		RuntimeObject* L_53 = V_1;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_53);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_54 = L_52;
		RuntimeObject* L_55 = V_2;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_55);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_56 = L_54;
		RuntimeObject* L_57 = V_3;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_57);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_58 = L_56;
		RuntimeObject* L_59 = V_4;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_59);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_60 = L_58;
		RuntimeObject* L_61 = V_5;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_61);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_62 = L_60;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_63 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_63, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 40)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		RuntimeObject* L_64;
		L_64 = Disposable_Create_m82A6DBA793F311771D19B0F319A2D099F910AF13(L_63, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_64);
		RuntimeObject* L_65;
		L_65 = StableCompositeDisposable_Create_m5C76D7FCA29AC1D50F9F48269C0104ED0BEDEA87(L_62, NULL);
		return (RuntimeObject*)L_65;
	}
}
// TR UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_mA5B09F629037E18441A752FD9024C7C2E68798C0_gshared (Zip_t745351DD358D96D9C7E88E6F053D214345454584* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue(), q6.Dequeue());
		ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* L_0 = (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* L_1 = (ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B*)L_0->___resultSelector_7;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		NullCheck(L_1);
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return L_14;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m7B86591BEECDC44E13902A928EE7223BB30AC0B2_gshared (Zip_t745351DD358D96D9C7E88E6F053D214345454584* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 49), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m52F06BFB6CA5A7C9BB0974D48B476171E82C7A5D_gshared (Zip_t745351DD358D96D9C7E88E6F053D214345454584* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 49), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m1499F844A5EB86A5DFC47C29C665150C8480CA07_gshared (Zip_t745351DD358D96D9C7E88E6F053D214345454584* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 49), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__9_0_m3ADA85E02E3D091B605B084DC44EBF7442E7BCD2_gshared (Zip_t745351DD358D96D9C7E88E6F053D214345454584* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
			NullCheck(L_7);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
			NullCheck(L_8);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
			// }
			goto IL_005f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mA295CE202832BFAFBC0666A9DD97A8529D70750C_gshared (Zip_t57557BB7D068237B9AC7C080FB9474057A754105* __this, ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_3);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_4);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_5);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// readonly Queue<T6> q6 = new Queue<T6>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_6);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___q6_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q6_12), (void*)L_6);
		// readonly Queue<T7> q7 = new Queue<T7>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_7);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		__this->___q7_13 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q7_13), (void*)L_7);
		// : base(observer, cancel)
		RuntimeObject* L_8 = ___1_observer;
		RuntimeObject* L_9 = ___2_cancel;
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		// this.parent = parent;
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_10 = ___0_parent;
		__this->___parent_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_10);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mC8D46594E3C381DBDBB5CC2891029E524368B621_gshared (Zip_t57557BB7D068237B9AC7C080FB9474057A754105* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5, q6, q7 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)7);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_11 = L_9;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_13 = L_11;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_14 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q7_13;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_14);
		NullCheck((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this);
		((  void (*) (NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*, ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((NthZipObserverBase_1_t1C289E0B26B5A56E2720D50DD86FE7AB3AA0FC54*)__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_15 = (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*)__this->___parent_5;
		NullCheck(L_15);
		RuntimeObject* L_16 = (RuntimeObject*)L_15->___source1_1;
		RuntimeObject* L_17 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_18 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_19 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_19);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_19, L_17, (RuntimeObject*)__this, 0, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		NullCheck(L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_16, (RuntimeObject*)L_19);
		V_0 = L_20;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_21 = (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*)__this->___parent_5;
		NullCheck(L_21);
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___source2_2;
		RuntimeObject* L_23 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_24 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_25 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
		NullCheck(L_25);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_25, L_23, (RuntimeObject*)__this, 1, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 24), L_22, (RuntimeObject*)L_25);
		V_1 = L_26;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_27 = (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*)__this->___parent_5;
		NullCheck(L_27);
		RuntimeObject* L_28 = (RuntimeObject*)L_27->___source3_3;
		RuntimeObject* L_29 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_30 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_31 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		NullCheck(L_31);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_31, L_29, (RuntimeObject*)__this, 2, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_28, (RuntimeObject*)L_31);
		V_2 = L_32;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_33 = (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*)__this->___parent_5;
		NullCheck(L_33);
		RuntimeObject* L_34 = (RuntimeObject*)L_33->___source4_4;
		RuntimeObject* L_35 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_36 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_37 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 30));
		NullCheck(L_37);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_37, L_35, (RuntimeObject*)__this, 3, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_34);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_34, (RuntimeObject*)L_37);
		V_3 = L_38;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_39 = (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*)__this->___parent_5;
		NullCheck(L_39);
		RuntimeObject* L_40 = (RuntimeObject*)L_39->___source5_5;
		RuntimeObject* L_41 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_42 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_43 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 34));
		NullCheck(L_43);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_43, L_41, (RuntimeObject*)__this, 4, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		NullCheck(L_40);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 36), L_40, (RuntimeObject*)L_43);
		V_4 = L_44;
		// var s6 = parent.source6.Subscribe(new ZipObserver<T6>(gate, this, 5, q6));
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_45 = (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*)__this->___parent_5;
		NullCheck(L_45);
		RuntimeObject* L_46 = (RuntimeObject*)L_45->___source6_6;
		RuntimeObject* L_47 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_48 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_49 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
		NullCheck(L_49);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_49, L_47, (RuntimeObject*)__this, 5, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		NullCheck(L_46);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_46, (RuntimeObject*)L_49);
		V_5 = L_50;
		// var s7 = parent.source7.Subscribe(new ZipObserver<T7>(gate, this, 6, q7));
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_51 = (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*)__this->___parent_5;
		NullCheck(L_51);
		RuntimeObject* L_52 = (RuntimeObject*)L_51->___source7_7;
		RuntimeObject* L_53 = (RuntimeObject*)__this->___gate_6;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_54 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q7_13;
		ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* L_55 = (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 42));
		NullCheck(L_55);
		((  void (*) (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82*, RuntimeObject*, RuntimeObject*, int32_t, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(L_55, L_53, (RuntimeObject*)__this, 6, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		NullCheck(L_52);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 44), L_52, (RuntimeObject*)L_55);
		V_6 = L_56;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_57 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)8);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_58 = L_57;
		RuntimeObject* L_59 = V_0;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_60 = L_58;
		RuntimeObject* L_61 = V_1;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_61);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_62 = L_60;
		RuntimeObject* L_63 = V_2;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_63);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_64 = L_62;
		RuntimeObject* L_65 = V_3;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_65);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_66 = L_64;
		RuntimeObject* L_67 = V_4;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_67);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_68 = L_66;
		RuntimeObject* L_69 = V_5;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_69);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_70 = L_68;
		RuntimeObject* L_71 = V_6;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_71);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_72 = L_70;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_73 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_73, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 46)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_tCF7A3DEF286F232A8FD61DB9CD7A1BADCFBCA925_il2cpp_TypeInfo_var);
		RuntimeObject* L_74;
		L_74 = Disposable_Create_m82A6DBA793F311771D19B0F319A2D099F910AF13(L_73, NULL);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_74);
		RuntimeObject* L_75;
		L_75 = StableCompositeDisposable_Create_m5C76D7FCA29AC1D50F9F48269C0104ED0BEDEA87(L_72, NULL);
		return (RuntimeObject*)L_75;
	}
}
// TR UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_GetResult_m0DBB0D1399E5C12A7C465DC0AA7399BE289F19B1_gshared (Zip_t57557BB7D068237B9AC7C080FB9474057A754105* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue(), q6.Dequeue(), q7.Dequeue());
		ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* L_0 = (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* L_1 = (ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099*)L_0->___resultSelector_8;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_14 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q7_13;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)))(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		NullCheck(L_1);
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_16;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m3BBF1894D6BA75041F1B367B7C6EF73E3F7F33E6_gshared (Zip_t57557BB7D068237B9AC7C080FB9474057A754105* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 56), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mD31CA66DA2A10805D72ABA1B472E634DBED389F8_gshared (Zip_t57557BB7D068237B9AC7C080FB9474057A754105* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 56), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m37F914734B7994434EA0E71D4332CC699F20A5DA_gshared (Zip_t57557BB7D068237B9AC7C080FB9474057A754105* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 56), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__10_0_mA39BA5C6232436963E85427A70D4284BDD1C5F49_gshared (Zip_t57557BB7D068237B9AC7C080FB9474057A754105* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q1_7;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q2_8;
			NullCheck(L_5);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q3_9;
			NullCheck(L_6);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q4_10;
			NullCheck(L_7);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q5_11;
			NullCheck(L_8);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q6_12;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___q7_13;
			NullCheck(L_10);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 67)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 67));
			// }
			goto IL_006a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_Multicast(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* currentDelegate = reinterpret_cast<ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenInst(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, method);
}
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenStatic(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, method);
}
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenStaticInvoker(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_ClosedStaticInvoker(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenVirtual(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenInterface(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenGenericVirtual(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenGenericInterface(ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3);
}
// System.Void UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4__ctor_m92C9F71970CFFC97033AFA05CF452C5BE1D88EBD_gshared (ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_Multicast;
}
// TR UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_Invoke_m001BF45A2CA73EA83427310B3E2570FF919A1298_gshared (ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_BeginInvoke_m08A7A9768CD730088BC76C27A3287E4EE9BCDC85_gshared (ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// TR UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_EndInvoke_m095E0705851A7ABC5637D8C22A7F6A0267663497_gshared (ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_Multicast(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* currentDelegate = reinterpret_cast<ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenInst(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenStatic(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenStaticInvoker(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_ClosedStaticInvoker(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenVirtual(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenInterface(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenGenericVirtual(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenGenericInterface(ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
// System.Void UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5__ctor_m3DD0133B7644298C5F12CA7CFD41D34F7C7B98AD_gshared (ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_Multicast;
}
// TR UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_Invoke_m839E86B4673B13660A304EB5ED8A323ECEA63160_gshared (ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_BeginInvoke_m4C378293181FC3CB1375A6DF138A530CEE89A385_gshared (ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// TR UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_EndInvoke_mDD3824542EADB9F3C9E1510A8248E78A8BFCE03F_gshared (ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_Multicast(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* currentDelegate = reinterpret_cast<ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenInst(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, method);
}
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenStatic(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, method);
}
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenStaticInvoker(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_ClosedStaticInvoker(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenVirtual(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenInterface(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenGenericVirtual(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenGenericInterface(ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
// System.Void UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6__ctor_mFF92A68C877F6DC3892C5A04DD7A0C31CE69EB7C_gshared (ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_Multicast;
}
// TR UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_Invoke_m800F7EBA1BA50BB2C9A26C65B36BD94DA8E4A3D5_gshared (ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_BeginInvoke_mC0A51624818FD9EF649932025F9CBED12FB2B8AB_gshared (ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// TR UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_EndInvoke_m234A83D756468343B44598DDCB27160846B2B398_gshared (ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_Multicast(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* currentDelegate = reinterpret_cast<ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenInst(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, method);
}
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenStatic(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, method);
}
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenStaticInvoker(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_ClosedStaticInvoker(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenVirtual(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenInterface(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenGenericVirtual(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenGenericInterface(ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
// System.Void UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7__ctor_mA897E6743BCD8521D4A3A6F26439D85672F7D484_gshared (ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_Multicast;
}
// TR UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_Invoke_m29F84F3E31F8123E587CDEF300126AB0B4E43251_gshared (ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_BeginInvoke_mC9146077C8DE4701D9904888853C28DBAF8185EC_gshared (ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	__d_args[5] = ___5_arg6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
// TR UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_EndInvoke_mE560993CEC867B073CC34D7B0A555E64748E8666_gshared (ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_Multicast(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* currentDelegate = reinterpret_cast<ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenInst(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, method);
}
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenStatic(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, method);
}
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenStaticInvoker(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_ClosedStaticInvoker(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	return InvokerFuncInvoker8< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenVirtual(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenInterface(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenGenericVirtual(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenGenericInterface(ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
// System.Void UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8__ctor_mD31FA518679CEB4709E0F561089AD136F297EBAF_gshared (ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_Multicast;
}
// TR UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_Invoke_mFBCB1DB6F304A96CD83E57D0041A4A6B6ACA2B03_gshared (ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_BeginInvoke_mEF87F309D5A5D0A8593A2862691F0AE1054F9C2E_gshared (ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	__d_args[5] = ___5_arg6;
	__d_args[6] = ___6_arg7;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
// TR UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_EndInvoke_mB977B1A35901602CFC577722693FA68FB1D286B3_gshared (ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1<T>,UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m6CD2B849FBCC0CD103E8A7DFD7E50FB30C49F70C_gshared (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* __this, ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public ZipLatest(ZipLatestObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___1_observer;
		RuntimeObject* L_2 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* L_3 = ___0_parent;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mCBF39085645789B2EE4445DD490EE0C4D2EC3F43_gshared (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// length = parent.sources.Length;
		ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* L_0 = (ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB*)__this->___parent_2;
		NullCheck(L_0);
		IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* L_1 = (IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99*)L_0->___sources_1;
		NullCheck(L_1);
		__this->___length_4 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// values = new T[length];
		int32_t L_2 = (int32_t)__this->___length_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)L_2);
		__this->___values_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values_5), (void*)L_3);
		// isStarted = new bool[length];
		int32_t L_4 = (int32_t)__this->___length_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___isStarted_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isStarted_6), (void*)L_5);
		// isCompleted = new bool[length];
		int32_t L_6 = (int32_t)__this->___length_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___isCompleted_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isCompleted_7), (void*)L_7);
		// var disposables = new IDisposable[length];
		int32_t L_8 = (int32_t)__this->___length_4;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_9 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// for (int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_0078;
	}

IL_0056:
	{
		// var source = parent.sources[i];
		ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* L_10 = (ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB*)__this->___parent_2;
		NullCheck(L_10);
		IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* L_11 = (IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99*)L_10->___sources_1;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// disposables[i] = source.Subscribe(new ZipLatestObserver(this, i));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_15 = V_0;
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = V_2;
		int32_t L_18 = V_1;
		ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* L_19 = (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_19);
		((  void (*) (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9*, ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_19, __this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_17);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_17, (RuntimeObject*)L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_20);
		// for (int i = 0; i < length; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0078:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)__this->___length_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}
	{
		// return StableCompositeDisposable.CreateUnsafe(disposables);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_24 = V_0;
		RuntimeObject* L_25;
		L_25 = StableCompositeDisposable_CreateUnsafe_m695F8AA1079E83184361F05CD3CD036A0EDBFE41(L_24, NULL);
		return (RuntimeObject*)L_25;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::Publish(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_mA5C09C62D3138C23A1E7EF6E2CB299C74D8EA79F_gshared (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// isStarted[index] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (bool)1);
		// var hasOnCompleted = false;
		V_0 = (bool)0;
		// var allValueStarted = true;
		V_1 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_0033;
	}

IL_0011:
	{
		// if (!isStarted[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		// allValueStarted = false;
		V_1 = (bool)0;
		// break;
		goto IL_003c;
	}

IL_001f:
	{
		// if (i == index) continue;
		int32_t L_6 = V_2;
		int32_t L_7 = ___0_index;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_002f;
		}
	}
	{
		// if (isCompleted[i]) hasOnCompleted = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isCompleted_7;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		// if (isCompleted[i]) hasOnCompleted = true;
		V_0 = (bool)1;
	}

IL_002f:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)__this->___length_4;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0011;
		}
	}

IL_003c:
	{
		// if (allValueStarted)
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// OnNext(new List<T>(values));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___values_5;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_17);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (RuntimeObject*)L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnNext(TSource) */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, (RuntimeObject*)L_17);
		// if (hasOnCompleted)
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
				((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_19 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_19);
			// try { observer.OnCompleted(); }
			goto IL_0069;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// return;
		return;
	}

IL_006a:
	{
		// Array.Clear(isStarted, 0, length); // reset
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_21 = (int32_t)__this->___length_4;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_20, 0, L_21, NULL);
		// return;
		return;
	}

IL_007d:
	{
		// for (int i = 0; i < length; i++)
		V_3 = 0;
		goto IL_00b4;
	}

IL_0081:
	{
		// if (i == index) continue;
		int32_t L_22 = V_3;
		int32_t L_23 = ___0_index;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00b0;
		}
	}
	{
		// if (isCompleted[i] && !isStarted[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isCompleted_7;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (uint8_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if (!L_27)
		{
			goto IL_00b0;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_28 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (uint8_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if (L_31)
		{
			goto IL_00b0;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a8:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
				((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_32 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_32);
			// try { observer.OnCompleted(); }
			goto IL_00af;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		// return;
		return;
	}

IL_00b0:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_34 = V_3;
		int32_t L_35 = (int32_t)__this->___length_4;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0081;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnNext(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mCC2EE7923A5E90ECE0A2FF2C4A915048A266D0F8_gshared (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m77D4137F78F4781A0162A5D4D5A16CBFAEC91465_gshared (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
				((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m498EC5C932CDFD01C78038C25151B10EFFF5BA8E_gshared (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this);
				((  void (*) (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult>,UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mE95F35E13DA9A1D8234C8927CBD6E4D1B7FA7A1F_gshared (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* __this, ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public ZipLatest(ZipLatestObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___1_observer;
		RuntimeObject* L_2 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* L_3 = ___0_parent;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m5AF2B3D1C09827F915349B6331C8AEA41A66EDA3_gshared (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftObserver(this));
		ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* L_0 = (ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E*)__this->___parent_2;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftObserver_t9C083E12C6420464C2AB25E6AA92A7ADFD34A934* L_2 = (LeftObserver_t9C083E12C6420464C2AB25E6AA92A7ADFD34A934*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (LeftObserver_t9C083E12C6420464C2AB25E6AA92A7ADFD34A934*, ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, (RuntimeObject*)L_2);
		// var r = parent.right.Subscribe(new RightObserver(this));
		ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* L_4 = (ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E*)__this->___parent_2;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___right_2;
		RightObserver_t78A614ECBB5D54728037276D05E29823BFE7C0AC* L_6 = (RightObserver_t78A614ECBB5D54728037276D05E29823BFE7C0AC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_6);
		((  void (*) (RightObserver_t78A614ECBB5D54728037276D05E29823BFE7C0AC*, ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (RuntimeObject*)L_6);
		V_0 = L_7;
		// return StableCompositeDisposable.Create(l, r);
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = StableCompositeDisposable_Create_mE6FE7DE8D021D587C179D6530AC57941CD9AF05F(L_3, L_8, NULL);
		return (RuntimeObject*)L_9;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::Publish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_mD82D876BC1292D77AEC707015F3B62D3D7B945F3_gshared (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if ((leftCompleted && !leftStarted) || (rightCompleted && !rightStarted))
		bool L_0 = (bool)__this->___leftCompleted_6;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)__this->___leftStarted_5;
		if (!L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = (bool)__this->___rightCompleted_9;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		bool L_3 = (bool)__this->___rightStarted_8;
		if (L_3)
		{
			goto IL_0038;
		}
	}

IL_0020:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_4 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_4);
			// try { observer.OnCompleted(); }
			goto IL_0037;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// return;
		return;
	}

IL_0038:
	{
		// else if (!(leftStarted && rightStarted))
		bool L_5 = (bool)__this->___leftStarted_5;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		bool L_6 = (bool)__this->___rightStarted_8;
		if (L_6)
		{
			goto IL_0049;
		}
	}

IL_0048:
	{
		// return;
		return;
	}

IL_0049:
	{
	}
	try
	{// begin try (depth: 1)
		// v = parent.selector(leftValue, rightValue);
		ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* L_7 = (ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E*)__this->___parent_2;
		NullCheck(L_7);
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_8 = (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*)L_7->___selector_3;
		RuntimeObject* L_9 = (RuntimeObject*)__this->___leftValue_4;
		RuntimeObject* L_10 = (RuntimeObject*)__this->___rightValue_7;
		NullCheck(L_8);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_0 = L_11;
		// }
		goto IL_0083;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_007a:
				{// begin finally (depth: 2)
					// finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
					((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
					// finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); }
				RuntimeObject* L_12 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_13 = V_1;
				NullCheck(L_12);
				InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_12, L_13);
				// try { observer.OnError(ex); }
				goto IL_0081;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0081:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c0;
		}
	}// end catch (depth: 1)

IL_0083:
	{
		// OnNext(v);
		RuntimeObject* L_14 = V_0;
		NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>::OnNext(TSource) */, (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, L_14);
		// leftStarted = false;
		__this->___leftStarted_5 = (bool)0;
		// rightStarted = false;
		__this->___rightStarted_8 = (bool)0;
		// if (leftCompleted || rightCompleted)
		bool L_15 = (bool)__this->___leftCompleted_6;
		if (L_15)
		{
			goto IL_00a8;
		}
	}
	{
		bool L_16 = (bool)__this->___rightCompleted_9;
		if (!L_16)
		{
			goto IL_00c0;
		}
	}

IL_00a8:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_17 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_17);
			// try { observer.OnCompleted(); }
			goto IL_00bf;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		// return;
		return;
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m6C3FDE35AE76BC199269344187E9DF87E1619415_gshared (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mCA3FB82068F903597DECB2954DF2A5B5282A680E_gshared (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mD211D88E4B8A2AE42E0426E7B2534875D29F5BD1_gshared (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mAB9E80C599FDF6D592C4925B2FF48FE3CF4D6BA8_gshared (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0* __this, int32_t ___0_length, ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m64E3DF523586E2A7167039A88EE367D5B70B17FE_gshared (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_1 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_3 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_5 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* L_6 = (ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D*)__this->___parent_5;
		NullCheck(L_6);
		RuntimeObject* L_7 = (RuntimeObject*)L_6->___source1_1;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_8 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_7, (RuntimeObject*)L_8);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* L_10 = (ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D*)__this->___parent_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->___source2_2;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_12 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* L_14 = (ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source3_3;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_16 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		// return StableCompositeDisposable.Create(s1, s2, s3);
		RuntimeObject* L_18 = V_0;
		RuntimeObject* L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = StableCompositeDisposable_Create_mE13AE8E8BD2E4EAC714922D7AEC0ED5871AD37D1(L_9, L_18, L_19, NULL);
		return (RuntimeObject*)L_20;
	}
}
// TR UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m41EF4FF308DD11B65E8575AEA463D24BC93A6110_gshared (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value);
		ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* L_0 = (ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* L_1 = (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43*)L_0->___resultSelector_4;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_2 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_4 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_6 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_1);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, L_3, L_5, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return L_8;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m3DC9D60293CEBCC80247150635FABA3D27ED9C73_gshared (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m2A740C74B27BE4A6E02D646C804F74131862450C_gshared (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m9996973E090550FF60CB66E9764D77F2BC88B730_gshared (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m4FA2BEBD6DEC0076138BA9D0F8060D4CCB77103F_gshared (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD* __this, int32_t ___0_length, ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m5800644BFB675F70EBB7D951A3AC64B96933E7DF_gshared (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_1 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_3 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_5 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_7 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* L_8 = (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E*)__this->___parent_5;
		NullCheck(L_8);
		RuntimeObject* L_9 = (RuntimeObject*)L_8->___source1_1;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_10 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_9, (RuntimeObject*)L_10);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* L_12 = (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E*)__this->___parent_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___source2_2;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_14 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* L_16 = (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E*)__this->___parent_5;
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->___source3_3;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_18 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* L_20 = (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E*)__this->___parent_5;
		NullCheck(L_20);
		RuntimeObject* L_21 = (RuntimeObject*)L_20->___source4_4;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_22 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c4_10;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4);
		RuntimeObject* L_24 = V_0;
		RuntimeObject* L_25 = V_1;
		RuntimeObject* L_26 = V_2;
		RuntimeObject* L_27;
		L_27 = StableCompositeDisposable_Create_mB8AF85AE2ECD4FCFA60F1A7AAA6B1AFFF4472C2C(L_11, L_24, L_25, L_26, NULL);
		return (RuntimeObject*)L_27;
	}
}
// TR UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_mC067A7B5037D73ACB0913B9114FDBA0DCDC4E571_gshared (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value);
		ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* L_0 = (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* L_1 = (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593*)L_0->___resultSelector_5;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_2 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_4 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_6 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_8 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		NullCheck(L_1);
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_1, L_3, L_5, L_7, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return L_10;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mC626EB04277302695549DF36CABC6EF5DA221E7B_gshared (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m4F1CAC9C2EDAA472224A09A23C2A5C038E0C9D74_gshared (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m4577D0A77CE1C1032E3745FDD4644A74CE91E17C_gshared (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m23E7B3CA33D96899EBD0F796C344061D16871854_gshared (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB* __this, int32_t ___0_length, ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mBD174A2D100D995C769278F238C0B70D181BB706_gshared (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_1 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_3 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_5 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_7 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_9 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* L_10 = (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C*)__this->___parent_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->___source1_1;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_12 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* L_14 = (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source2_2;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_16 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* L_18 = (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C*)__this->___parent_5;
		NullCheck(L_18);
		RuntimeObject* L_19 = (RuntimeObject*)L_18->___source3_3;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_20 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_19, (RuntimeObject*)L_20);
		V_2 = L_21;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* L_22 = (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C*)__this->___parent_5;
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->___source4_4;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_24 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c4_10;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_23, (RuntimeObject*)L_24);
		V_3 = L_25;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* L_26 = (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C*)__this->___parent_5;
		NullCheck(L_26);
		RuntimeObject* L_27 = (RuntimeObject*)L_26->___source5_5;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_28 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c5_11;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_27, (RuntimeObject*)L_28);
		V_4 = L_29;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_30 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_31 = L_30;
		RuntimeObject* L_32 = V_0;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = L_31;
		RuntimeObject* L_34 = V_1;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_35 = L_33;
		RuntimeObject* L_36 = V_2;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_35;
		RuntimeObject* L_38 = V_3;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_4;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_40);
		RuntimeObject* L_41;
		L_41 = StableCompositeDisposable_Create_m5C76D7FCA29AC1D50F9F48269C0104ED0BEDEA87(L_39, NULL);
		return (RuntimeObject*)L_41;
	}
}
// TR UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m0BC4BB024C295BCA02C1C04DA12BB3D144FB971C_gshared (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value);
		ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* L_0 = (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* L_1 = (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF*)L_0->___resultSelector_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_2 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_4 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_6 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_8 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_10 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_1);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_1, L_3, L_5, L_7, L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return L_12;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m1A69AE90A94EAE5BF3134B9701AE743A16F2E758_gshared (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m06FA02BE0687203B00FB0E02E41BC240EE05D6E2_gshared (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m251EF7DB9FA789566D6DAAA9937A3C51B04EDDB9_gshared (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m93212A77606F4F83FA3C0C67BDD1DD2B3CF0484D_gshared (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4* __this, int32_t ___0_length, ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m7073B4771D51384C909DF2CE02AA4E1EF09A0085_gshared (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_1 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_3 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_5 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_7 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_9 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject* L_10 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_11 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_11);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_11, L_10, (RuntimeObject*)__this, 5, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->___c6_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6_12), (void*)L_11);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* L_12 = (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*)__this->___parent_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___source1_1;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_14 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* L_16 = (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*)__this->___parent_5;
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->___source2_2;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_18 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* L_20 = (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*)__this->___parent_5;
		NullCheck(L_20);
		RuntimeObject* L_21 = (RuntimeObject*)L_20->___source3_3;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_22 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* L_24 = (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*)__this->___parent_5;
		NullCheck(L_24);
		RuntimeObject* L_25 = (RuntimeObject*)L_24->___source4_4;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_26 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c4_10;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_25, (RuntimeObject*)L_26);
		V_3 = L_27;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* L_28 = (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*)__this->___parent_5;
		NullCheck(L_28);
		RuntimeObject* L_29 = (RuntimeObject*)L_28->___source5_5;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_30 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c5_11;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_29, (RuntimeObject*)L_30);
		V_4 = L_31;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* L_32 = (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*)__this->___parent_5;
		NullCheck(L_32);
		RuntimeObject* L_33 = (RuntimeObject*)L_32->___source6_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_34 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c6_12;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_33, (RuntimeObject*)L_34);
		V_5 = L_35;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_36;
		RuntimeObject* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_1;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = L_39;
		RuntimeObject* L_42 = V_2;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_42);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_41;
		RuntimeObject* L_44 = V_3;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_5;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_48);
		RuntimeObject* L_49;
		L_49 = StableCompositeDisposable_Create_m5C76D7FCA29AC1D50F9F48269C0104ED0BEDEA87(L_47, NULL);
		return (RuntimeObject*)L_49;
	}
}
// TR UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_m51AACC033400BA6C7D1C69AD39E40477DEDCF200_gshared (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value);
		ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* L_0 = (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* L_1 = (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B*)L_0->___resultSelector_7;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_2 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_4 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_6 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_8 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_10 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_12 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		NullCheck(L_1);
		RuntimeObject* L_14;
		L_14 = ((  RuntimeObject* (*) (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return L_14;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m730B6C12049B8BB978465B74C7501E4D3BF5BBAC_gshared (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m1DCDDEEE6E39EEDD1C3C6753DA8619B8B1352281_gshared (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m671791782D6156EFA95D8F603859E61C84773503_gshared (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m3D98906D9A1E0CC6957D7A0359600C0313C88DAD_gshared (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED* __this, int32_t ___0_length, ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* ___1_parent, RuntimeObject* ___2_observer, RuntimeObject* ___3_cancel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___0_length;
		RuntimeObject* L_2 = ___2_observer;
		RuntimeObject* L_3 = ___3_cancel;
		((  void (*) (NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((NthZipLatestObserverBase_1_t7C169DC6632270B414935F0E2CF11EEC83159475*)__this, L_1, L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_4 = ___1_parent;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mA9704BA780C78C4512F154BA1A9B1DD892BB84CD_gshared (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_1 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_1);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_0, (RuntimeObject*)__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_3 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_2, (RuntimeObject*)__this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_5 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_5);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_5, L_4, (RuntimeObject*)__this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_7 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_7);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_7, L_6, (RuntimeObject*)__this, 3, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_9 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_9, L_8, (RuntimeObject*)__this, 4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject* L_10 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_11 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_11);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_11, L_10, (RuntimeObject*)__this, 5, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		__this->___c6_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6_12), (void*)L_11);
		// c7 = new ZipLatestObserver<T7>(gate, this, 6);
		RuntimeObject* L_12 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_13 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		NullCheck(L_13);
		((  void (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_13, L_12, (RuntimeObject*)__this, 6, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		__this->___c7_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c7_13), (void*)L_13);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_14 = (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source1_1;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_16 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_15, (RuntimeObject*)L_16);
		V_0 = L_17;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_18 = (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*)__this->___parent_5;
		NullCheck(L_18);
		RuntimeObject* L_19 = (RuntimeObject*)L_18->___source2_2;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_20 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_19, (RuntimeObject*)L_20);
		V_1 = L_21;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_22 = (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*)__this->___parent_5;
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->___source3_3;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_24 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_23, (RuntimeObject*)L_24);
		V_2 = L_25;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_26 = (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*)__this->___parent_5;
		NullCheck(L_26);
		RuntimeObject* L_27 = (RuntimeObject*)L_26->___source4_4;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_28 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c4_10;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_27, (RuntimeObject*)L_28);
		V_3 = L_29;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_30 = (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*)__this->___parent_5;
		NullCheck(L_30);
		RuntimeObject* L_31 = (RuntimeObject*)L_30->___source5_5;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_32 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c5_11;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_31, (RuntimeObject*)L_32);
		V_4 = L_33;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_34 = (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*)__this->___parent_5;
		NullCheck(L_34);
		RuntimeObject* L_35 = (RuntimeObject*)L_34->___source6_6;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_36 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c6_12;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_35, (RuntimeObject*)L_36);
		V_5 = L_37;
		// var s7 = parent.source7.Subscribe(c7);
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_38 = (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*)__this->___parent_5;
		NullCheck(L_38);
		RuntimeObject* L_39 = (RuntimeObject*)L_38->___source7_7;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_40 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c7_13;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_39, (RuntimeObject*)L_40);
		V_6 = L_41;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_42;
		RuntimeObject* L_44 = V_0;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_1;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_48);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = L_47;
		RuntimeObject* L_50 = V_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_50);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_51 = L_49;
		RuntimeObject* L_52 = V_4;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_52);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_53 = L_51;
		RuntimeObject* L_54 = V_5;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_55 = L_53;
		RuntimeObject* L_56 = V_6;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_56);
		RuntimeObject* L_57;
		L_57 = StableCompositeDisposable_Create_m5C76D7FCA29AC1D50F9F48269C0104ED0BEDEA87(L_55, NULL);
		return (RuntimeObject*)L_57;
	}
}
// TR UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_GetResult_mEEC00053DDFCAC17295D7807E6A7F31638D3C3D8_gshared (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED* __this, const RuntimeMethod* method) 
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value, c7.Value);
		ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* L_0 = (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* L_1 = (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506*)L_0->___resultSelector_8;
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_2 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c1_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_4 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c2_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_6 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c3_9;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_8 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c4_10;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_10 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c5_11;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_12 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c6_12;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* L_14 = (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*)__this->___c7_13;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		NullCheck(L_1);
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return L_16;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mE29515465F572D79BE1727FE72187EC786E4BD2D_gshared (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m02BC0CA933052B92EA079A8C5A6103C8377B531F_gshared (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___0_error;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mC82773FD724E5F9AC7AAE7F5710F079AD098582D_gshared (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this);
				((  void (*) (OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t0CCE87F1B079EDF29D80A4C361277ED72B022346*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 40), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_Multicast(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* currentDelegate = reinterpret_cast<ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenInst(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, method);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenStatic(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, method);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenStaticInvoker(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_ClosedStaticInvoker(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenVirtual(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenInterface(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenGenericVirtual(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3);
}
RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenGenericInterface(ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3);
}
// System.Void UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4__ctor_mF69670742E85D9384171C8F483F69CEFD5C26AAF_gshared (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_Invoke_m5DE4372E48B507314BC913862E0D179596D878F8_gshared (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_BeginInvoke_mF7ED21067B55CB78BC72841128B2A626BB8FA9B4_gshared (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_EndInvoke_m1F92A323790668572702907C8B64C2234237E0DF_gshared (ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_Multicast(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* currentDelegate = reinterpret_cast<ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenInst(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenStatic(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenStaticInvoker(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_ClosedStaticInvoker(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenVirtual(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenInterface(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenGenericVirtual(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenGenericInterface(ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4);
}
// System.Void UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5__ctor_m086A2393B53D33A65AFC359534D4D5E332DD68A9_gshared (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_Invoke_m6BE99B7833389466D86AD4F600D1948D39F6299A_gshared (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_BeginInvoke_m6E40B76FD573C30D0862E37EE639AF7D6251ABFA_gshared (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_EndInvoke_m65551836B16A329DCF5B628C5A3A6160A93184EE_gshared (ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_Multicast(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* currentDelegate = reinterpret_cast<ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenInst(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, method);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenStatic(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, method);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenStaticInvoker(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_ClosedStaticInvoker(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenVirtual(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenInterface(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenGenericVirtual(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenGenericInterface(ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5);
}
// System.Void UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6__ctor_mAEC6ED8F01171E8DBBF133B184DECA3849749B4C_gshared (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_Invoke_m6829E1FE7A4CFB4584D5B00490987E2CB86359E9_gshared (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_BeginInvoke_m406C1FB19D3FDDE2EAD92E6A173E867BB05FD4C7_gshared (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_EndInvoke_m07CB7198F1FFFC3692D4680A1EF2190C46A0D2F8_gshared (ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_Multicast(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* currentDelegate = reinterpret_cast<ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenInst(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, method);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenStatic(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, method);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenStaticInvoker(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_ClosedStaticInvoker(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenVirtual(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenInterface(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenGenericVirtual(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenGenericInterface(ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker5< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6);
}
// System.Void UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7__ctor_mD5F94FFD7654A11EC4846D03CCC2C5202991B33C_gshared (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_Invoke_mF67C90D85ACBC62F4F7141E104B4AEE37E4C4313_gshared (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_BeginInvoke_m855C9E098618DCBC4EFC6A0D719F55350A39C5E9_gshared (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___6_callback, RuntimeObject* ___7_object, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	__d_args[5] = ___5_arg6;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___6_callback, (RuntimeObject*)___7_object);
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_EndInvoke_mCC6EF970E43D7399990D0B2B6ACA19DD7274E7A0_gshared (ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_Multicast(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* currentDelegate = reinterpret_cast<ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenInst(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, method);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenStatic(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, method);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenStaticInvoker(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_ClosedStaticInvoker(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	return InvokerFuncInvoker8< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenVirtual(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return VirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenInterface(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return InterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenGenericVirtual(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericVirtualFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenGenericInterface(ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method)
{
	NullCheck(___0_arg1);
	return GenericInterfaceFuncInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(method, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7);
}
// System.Void UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8__ctor_m892837ADE9E3E2797529B3E153F8CA9F62190224_gshared (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_Invoke_m74DFCBE0BD53D8EDA5CBA1CAC934117DC18A23BD_gshared (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, ___4_arg5, ___5_arg6, ___6_arg7, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_BeginInvoke_m70CA3984EB18E2E74FB52F087BBF049C345B90FA_gshared (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, RuntimeObject* ___2_arg3, RuntimeObject* ___3_arg4, RuntimeObject* ___4_arg5, RuntimeObject* ___5_arg6, RuntimeObject* ___6_arg7, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	__d_args[0] = ___0_arg1;
	__d_args[1] = ___1_arg2;
	__d_args[2] = ___2_arg3;
	__d_args[3] = ___3_arg4;
	__d_args[4] = ___4_arg5;
	__d_args[5] = ___5_arg6;
	__d_args[6] = ___6_arg7;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_EndInvoke_m8935DD376E677AE8E72E46EBB1FC25442CBB51FA_gshared (ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1<System.Object>::.ctor(UniRx.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_1__ctor_m48D84AD018912542DBFDE0575216A2D9BE9C9492_gshared (ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* __this, IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* ___0_sources, const RuntimeMethod* method) 
{
	{
		// : base(true)
		((  void (*) (OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* L_0 = ___0_sources;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1<System.Object>::SubscribeCore(UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_1_SubscribeCore_m148588453B2352C7868D7D987FB4227C0F234790_gshared (ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_2 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*, ZipLatestObservable_1_t9BCE6B2914A8BD6E209495BC0D647DE5FF9095BB*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<TLeft>,UniRx.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_3__ctor_m92F888932C8C9399DF08B368D811771B62F8F92E_gshared (ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_selector, const RuntimeMethod* method) 
{
	ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* G_B2_0 = NULL;
	ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___0_left;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___1_right;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___2_selector;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_3_SubscribeCore_mC999142F052EC7C8E8E178A2038934AB2E13241C_gshared (ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E* L_2 = (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E*, ZipLatestObservable_3_t45318F22B5D1E3341EFEF164B22FCBF882511D3E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tC1FD695C4ADF0C81E7DF9FED0BC1FF197751403E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_4__ctor_mD8AEB0D35864D8DB322CD6F90C5C72CEE5F70F70_gshared (ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* ___3_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* G_B3_0 = NULL;
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* G_B1_0 = NULL;
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___0_source1;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___1_source2;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___2_source3;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_4_tE03618DDF94A91F0525533E6E34E760B4E503C43* L_9 = ___3_resultSelector;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_4_SubscribeCore_m23D9455DE65F2A5018C6B37FF1CAC6F68F8F47FC_gshared (ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(3, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0* L_2 = (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0*, int32_t, ZipLatestObservable_4_tACAC8019C9A6BD5D72845B339DF847EC53BCA46D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, 3, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tFB404759D1EEFBC56C29D187FCF162B9595180C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_5__ctor_m7CE48AD0B6405612E907D0CD7A8A56A57E656C4C_gshared (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* ___4_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B4_0 = NULL;
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B1_0 = NULL;
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B2_0 = NULL;
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___0_source1;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___1_source2;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___2_source3;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___3_source4;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_5_t0DEE1C050F03CCD9ECC8E7FDB9F16788C32B3593* L_12 = ___4_resultSelector;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_5_SubscribeCore_mA2D05F4F6F19EDB35770A7F2CB3CA33EF6CA3B6F_gshared (ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(4, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD* L_2 = (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD*, int32_t, ZipLatestObservable_5_tE0308BD69AB4930EA79CB1A26308B1DD8423B92E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, 4, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tBCF1CE5E1241E1594242E0808C7679C7B76327FD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_6__ctor_mFE975906F7CB99829CB82FDEED59D35F0077297B_gshared (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* ___5_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B5_0 = NULL;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B1_0 = NULL;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B2_0 = NULL;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B3_0 = NULL;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___0_source1;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___1_source2;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___2_source3;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___3_source4;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___4_source5;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_6_t435C577B069934F2BC74E0777DC011FD639DC4AF* L_15 = ___5_resultSelector;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_6_SubscribeCore_m502A786398AFF42D6B33CB85F87AC5423D0BB7F3_gshared (ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(5, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB* L_2 = (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB*, int32_t, ZipLatestObservable_6_tF803C80AF3A1178D29F3EE307B46B34B61C5ED3C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, 5, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t0AD9210EECF40D5F89396751FFB620B887ABACDB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_7__ctor_m2A52970E5064046F6A8DC3BC8B583662FB9282FC_gshared (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B6_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B1_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B2_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B3_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B4_0 = NULL;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_7_tFB860BF2BD7C86B830FFAAF261610FC6D719D31B* L_18 = ___6_resultSelector;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_7_SubscribeCore_m6AF4D2CBA0D41CA7FF2E580E902DC6CB524297A8_gshared (ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(6, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4* L_2 = (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4*, int32_t, ZipLatestObservable_7_t1E2521D98B605D1FE371520A5DE3C7A606548C16*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, 6, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t52CD9820BB5ACCBA5E993406872CA649CAE352B4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.IObservable`1<T7>,UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_8__ctor_mE8622ADE993CA80359805BD935C606DF67BE74FE_gshared (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B7_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B1_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B2_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B3_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B4_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B5_0 = NULL;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_8_tDE132F2A1777B74BE871735E22A804FF4D235506* L_21 = ___7_resultSelector;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_8_SubscribeCore_mACDFD3C781990195D4D2088E705E2827534D89B7_gshared (ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(7, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED* L_2 = (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED*, int32_t, ZipLatestObservable_8_t73F9BC4BE2D1C0018329FD41E1119E2D0667B1A2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, 7, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t14A8FFD7E90777E02BFC94711072725498F9C6ED*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1/ZipLatest<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver__ctor_m3F6415A5C1D586F563E0D8405A1254B8CC1E64FB_gshared (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* __this, ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(ZipLatest parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___1_index;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnNext_m911B80CE99D4CAAF779C363B905F619677CCBE4A_gshared (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_0 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.values[index] = value;
			ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_5 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
			NullCheck(L_5);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_5->___values_5;
			int32_t L_7 = (int32_t)__this->___index_1;
			RuntimeObject* L_8 = ___0_value;
			NullCheck(L_6);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
			// parent.Publish(index);
			ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_9 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
			int32_t L_10 = (int32_t)__this->___index_1;
			NullCheck(L_9);
			((  void (*) (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// }
			goto IL_004a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnError_mD498FBE11FCCC0BFC0CAD0FB99BD8B00282C6A4F_gshared (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_0 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_5 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnCompleted_m03CC29696F3B3EB170FCBA045A54C318D31D3872_gshared (ZipLatestObserver_t3A8DAE377A0C8F2F7546B5B2220C6B0A2C3B13A9* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_0 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isCompleted[index] = true;
				ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_5 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isCompleted_7;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isCompleted[i])
				ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_8 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isCompleted_7;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_15 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_4;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704* L_18 = (ZipLatest_t5D5269A96C7F03545D441877523BC4A695ED5704*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T UniRx.Operators.ZipLatestObserver`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObserver_1_get_Value_mEAFDB34812CA4D9ED4D570359E0AD0A2F980B696_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, const RuntimeMethod* method) 
{
	{
		// public T Value { get { return value; } }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_3;
		return L_0;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipLatestObservable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1__ctor_m79AD699A398980F6006371A0C33557DD6DE9BBF4_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(object gate, IZipLatestObservable parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___0_gate;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___1_parent;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___2_index;
		__this->___index_2 = L_2;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnNext_mAF6DFAC967F55BB2B29ABA3544ECCC804E8C78DA_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// this.value = value;
			RuntimeObject* L_4 = ___0_value;
			__this->___value_3 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___value_3), (void*)L_4);
			// parent.Publish(index);
			RuntimeObject* L_5 = (RuntimeObject*)__this->___parent_1;
			int32_t L_6 = (int32_t)__this->___index_2;
			NullCheck(L_5);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipLatestObservable::Publish(System.Int32) */, IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var, L_5, L_6);
			// }
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnError_mAD3E0BDF323C8CB7BAF71848C08DA7C8A3CDFCC1_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipLatestObservable::Fail(System.Exception) */, IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnCompleted_m1BC3CBB3FDA54553793FA43F6E21573464156222_gshared (ZipLatestObserver_1_tFE93ECD544C2DFA03B7724DAC1E9A6301C4F06AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			int32_t L_5 = (int32_t)__this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipLatestObservable::Done(System.Int32) */, IZipLatestObservable_t5A11F7AE21C10106FAC852FD1C3084488C6B31F4_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`1<System.Object>::.ctor(UniRx.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_1__ctor_mDE998B8F318CB10BB11041991AD3CB4F8FEE2F2F_gshared (ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* __this, IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* ___0_sources, const RuntimeMethod* method) 
{
	{
		// : base(true)
		((  void (*) (OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((OperatorObservableBase_1_t71077376F150047DD8648527E82710F4304A5AB5*)__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_t5BE6DD33455B8A9B6A9C014AA41676CDD1BA2A99* L_0 = ___0_sources;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1<System.Object>::SubscribeCore(UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_1_SubscribeCore_m594DDC15C748648B876D4E801B195330A78AC160_gshared (ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_2 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		((  void (*) (Zip_t0769F5A976AE22001B72090856BA389A396B4886*, ZipObservable_1_t2DBAEE0A14620569CAA97C88AD02E8B5385778A7*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t0769F5A976AE22001B72090856BA389A396B4886*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<TLeft>,UniRx.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_3__ctor_m11132C21F492E3E25725D447569159701B3F39F7_gshared (ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* __this, RuntimeObject* ___0_left, RuntimeObject* ___1_right, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_selector, const RuntimeMethod* method) 
{
	ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* G_B2_0 = NULL;
	ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___0_left;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___1_right;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B3_1, (bool)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___0_left;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___1_right;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_6 = ___2_selector;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_3_SubscribeCore_mADBB277CBC50C12C9CEA62C0DB9668636D042AB9_gshared (ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1* L_2 = (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_2);
		((  void (*) (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1*, ZipObservable_3_tFEE0658247364646AEC80E46AE18923102B640EE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tE53D0E4973448320A35F98A17781BD573E9A41B1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.Operators.ZipFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_4__ctor_m3FEB7036A2AA22F0D3AEE118B7ED7DDC08F02F5D_gshared (ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* ___3_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* G_B3_0 = NULL;
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* G_B1_0 = NULL;
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B4_1, (bool)G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___0_source1;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___1_source2;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___2_source3;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipFunc_4_t7951DB92D82BC20BF5CCCF7C1A5D8C88C506DF1A* L_9 = ___3_resultSelector;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_4_SubscribeCore_m39D4E079A63DBC0EF422BB60D1EE4236FF5D4B34_gshared (ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361* L_2 = (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		((  void (*) (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361*, ZipObservable_4_tCD12EB09CD73411894D11CC840C2EEB379072D88*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t8414819FB62781B1E89B9ED1EF935C7C4E438361*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_5__ctor_mAE6F13E2732E5B04EB954150914622A6300090F8_gshared (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* ___4_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B4_0 = NULL;
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B1_0 = NULL;
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B2_0 = NULL;
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B5_1, (bool)G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___0_source1;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___1_source2;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___2_source3;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___3_source4;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipFunc_5_tB982805FA45DEB5C5A74D55299811021EB95E11A* L_12 = ___4_resultSelector;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_5_SubscribeCore_mEFD90E25B7FFC2D7EDE81CF3B3BB6DE656AF6EE3_gshared (ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t512C02E2B1102946393817FA88F3239E9B320828* L_2 = (Zip_t512C02E2B1102946393817FA88F3239E9B320828*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		((  void (*) (Zip_t512C02E2B1102946393817FA88F3239E9B320828*, ZipObservable_5_t69903CDE49C3CE8D512909AD7DD253B1EB70FE90*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t512C02E2B1102946393817FA88F3239E9B320828*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_6__ctor_m31545CE14BF9D19EDFC043C91D2A76623298E1C9_gshared (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* ___5_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B5_0 = NULL;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B1_0 = NULL;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B2_0 = NULL;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B3_0 = NULL;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B6_1, (bool)G_B6_0, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___0_source1;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___1_source2;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___2_source3;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___3_source4;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___4_source5;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipFunc_6_t16D3043726D9B8A367D7B1539252BFB4A0C0E702* L_15 = ___5_resultSelector;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_6_SubscribeCore_mF4805F46E21FF81CF5B3A30C4D469E1B4CE42184_gshared (ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE* L_2 = (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		((  void (*) (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE*, ZipObservable_6_tD055749639A0C463FD523E81DAC733483261D533*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tB1E130284430EC6BEE997E99EE61145FB3C350EE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_mB3C37C1B3B2713D243A77B1D32CC4F930F7FDAB6_gshared (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* ___6_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B6_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B1_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B2_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B3_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B4_0 = NULL;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B7_1, (bool)G_B7_0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___0_source1;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___1_source2;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___2_source3;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___3_source4;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___4_source5;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___5_source6;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipFunc_7_tF07C90752EE0E6BDCA4F664351FE0C426B388C5B* L_18 = ___6_resultSelector;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_m2E6630ED0BBCCE2E05DE22EBE64FF5C19E37315F_gshared (ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t745351DD358D96D9C7E88E6F053D214345454584* L_2 = (Zip_t745351DD358D96D9C7E88E6F053D214345454584*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_2);
		((  void (*) (Zip_t745351DD358D96D9C7E88E6F053D214345454584*, ZipObservable_7_t46844D917950B8D7146C690C7749ECB307C9D07E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t745351DD358D96D9C7E88E6F053D214345454584*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.IObservable`1<T7>,UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_m8A7B30D522F009F909F49D2409201DB7CC982DC7_gshared (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* __this, RuntimeObject* ___0_source1, RuntimeObject* ___1_source2, RuntimeObject* ___2_source3, RuntimeObject* ___3_source4, RuntimeObject* ___4_source5, RuntimeObject* ___5_source6, RuntimeObject* ___6_source7, ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* ___7_resultSelector, const RuntimeMethod* method) 
{
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B7_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B1_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B2_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B3_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B4_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B5_0 = NULL;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___0_source1;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___1_source2;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___2_source3;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___3_source4;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___4_source5;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___5_source6;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___6_source7;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		((  void (*) (OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((OperatorObservableBase_1_t9C585DC007FEFE1584D42CBC63D6A42812366512*)G_B8_1, (bool)G_B8_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___0_source1;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___1_source2;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___2_source3;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___3_source4;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___4_source5;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___5_source6;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___6_source7;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipFunc_8_tE95B38B4C95B38A49284A87D54004E798A019099* L_21 = ___7_resultSelector;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_m140386176A1F3C24AE3DDFC284E692DE6DB7B6F0_gshared (ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Zip_t57557BB7D068237B9AC7C080FB9474057A754105* L_2 = (Zip_t57557BB7D068237B9AC7C080FB9474057A754105*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		((  void (*) (Zip_t57557BB7D068237B9AC7C080FB9474057A754105*, ZipObservable_8_tE835FB486576DC790F6DA16DEDDFF10AAC8EE3E2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t57557BB7D068237B9AC7C080FB9474057A754105*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::.ctor(UniRx.Operators.ZipObservable`1/Zip<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m7FAE0486AE10068593ECA20C4F186DCEFE1195D4_gshared (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* __this, Zip_t0769F5A976AE22001B72090856BA389A396B4886* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(Zip parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_0 = ___0_parent;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___1_index;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_mD62AB8ECF2155A70834F14E47EA63D9024B2FF31_gshared (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_0 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.queues[index].Enqueue(value);
			Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_5 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
			NullCheck(L_5);
			Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460* L_6 = (Queue_1U5BU5D_t1AB57CABC3641F160BA1E4BD16180601AF53E460*)L_5->___queues_4;
			int32_t L_7 = (int32_t)__this->___index_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			RuntimeObject* L_10 = ___0_value;
			NullCheck(L_9);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_11 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
			int32_t L_12 = (int32_t)__this->___index_1;
			NullCheck(L_11);
			((  void (*) (Zip_t0769F5A976AE22001B72090856BA389A396B4886*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			// }
			goto IL_004b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_mA138AA6D064CF5D6B6DE5CD1A06E7531B0CA0B59_gshared (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* __this, Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_0 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_5 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
			Exception_t* L_6 = ___0_ex;
			NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_5);
			VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_mC42839C86AD7BD2A2EEC6B85A368D89B35E25949_gshared (ZipObserver_t5221F3D85E2D75E4576AC83A57479DCEBFF7F3E5* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_0 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isDone[index] = true;
				Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_5 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isDone_5;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isDone[i])
				Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_8 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isDone_5;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_15 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_6;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				Zip_t0769F5A976AE22001B72090856BA389A396B4886* L_18 = (Zip_t0769F5A976AE22001B72090856BA389A396B4886*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_18);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_t1AA1A1BC4CB8B1088681EC6F4DC19EBC3835E77F*)L_18);
			}

IL_0062_1:
			{
				// }
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipObservable,System.Int32,System.Collections.Generic.Queue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_mAE0F1A8594CEE97B519E73E38EE54DFE7E61C413_gshared (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* __this, RuntimeObject* ___0_gate, RuntimeObject* ___1_parent, int32_t ___2_index, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___3_queue, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___0_gate;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___1_parent;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___2_index;
		__this->___index_2 = L_2;
		// this.queue = queue;
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = ___3_queue;
		__this->___queue_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_m435D7CB107DEAD0374D87FA73B6F198452512368_gshared (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// queue.Enqueue(value);
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queue_3;
			RuntimeObject* L_5 = ___0_value;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
			// parent.Dequeue(index);
			RuntimeObject* L_6 = (RuntimeObject*)__this->___parent_1;
			int32_t L_7 = (int32_t)__this->___index_2;
			NullCheck(L_6);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipObservable::Dequeue(System.Int32) */, IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var, L_6, L_7);
			// }
			goto IL_003a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_m46FEDBF6A642CBE12CFB126C8E07C9E16F374F2D_gshared (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			Exception_t* L_5 = ___0_error;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipObservable::Fail(System.Exception) */, IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_m1240D564EAAAE6B66FBF7E7B5906C52A128D37EA_gshared (ZipObserver_1_t3FEF2D97F4F2414AB59F1A1101152BF839385A82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			int32_t L_5 = (int32_t)__this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipObservable::Done(System.Int32) */, IZipObservable_tD3010A83AAEC86CB176A2FF3D6E5ECFE0AA2A8CD_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) 
{
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = (Substring_t2E16755269E6716C22074D6BC0A9099915E67849)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = (JsonValue_t01DB320267C848E729A400EF2345979978F851D2)__this->____current_3;
		return L_0;
	}
}
