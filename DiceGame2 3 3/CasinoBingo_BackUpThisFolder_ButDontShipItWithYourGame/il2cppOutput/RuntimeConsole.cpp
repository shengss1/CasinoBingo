#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>>
struct Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<LeeFramework.UILoopListMini.LoopItem>
struct Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.EventSystems.PointerEventData>
struct Action_1_t5EFD410279BD84F1ADB35DF7BC8E54B56036EA41;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<LeeFramework.Console.LogCache>
struct Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>
struct Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,LeeFramework.Console.LogView>
struct KeyCollection_tE07DAA1DA2B6132E152D13E3F1FCE50C43575DF9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<LeeFramework.Console.Log>
struct List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8;
// System.Collections.Generic.List`1<LeeFramework.Console.LogCache>
struct List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2;
// System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>
struct List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<LeeFramework.Console.LogCache>
struct Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Collections.Generic.Queue`1<LeeFramework.Console.Log>
struct Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LeeFramework.Console.LogView>
struct ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,LeeFramework.Console.LogView>[]
struct EntryU5BU5D_t6B7E171B9EC51861B4D18BDF97474F2B547F56CE;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// LeeFramework.Console.Log[]
struct LogU5BU5D_tC7A4AF86490BB0B709CB4EB2D30AED1B4FCF1D00;
// LeeFramework.Console.LogCache[]
struct LogCacheU5BU5D_t3FFF4ABFA49C86EF6AE9692D4E2728CBB6A2DB79;
// LeeFramework.UILoopListMini.LoopItem[]
struct LoopItemU5BU5D_t134085D5CA0506AC66F6135FA3A2B9A19870B6A9;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Application
struct Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// LeeFramework.Console.BottomExt
struct BottomExt_tBA3CED9CBF84E5B2CD50B7F277F4494F6345F255;
// LeeFramework.Console.BottomMove
struct BottomMove_t700697ACA9F2B3D054405D20BBDDDB0A88C4644E;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// LeeFramework.Console.ConsoleAll
struct ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D;
// LeeFramework.Console.ConsoleBottom
struct ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6;
// LeeFramework.Console.ConsoleInfo
struct ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C;
// LeeFramework.Console.ConsoleMini
struct ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LeeFramework.Console.Log
struct Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA;
// LeeFramework.Console.LogCache
struct LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E;
// LeeFramework.Console.LogDetail
struct LogDetail_tDD7746A6F48E5DACFDC036129D2A578D60611CA1;
// LeeFramework.Console.LogMgr
struct LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297;
// LeeFramework.Console.LogView
struct LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0;
// LeeFramework.UILoopListMini.LoopItem
struct LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8;
// LeeFramework.UILoopListMini.LoopListBase
struct LoopListBase_t342BCA842B45F1108BF7D4C5ABA3849457D18463;
// LeeFramework.UILoopListMini.LoopListMini
struct LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// LeeFramework.Console.RuntimeConsole
struct RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// LeeFramework.UILoopListMini.ScrollRectMini
struct ScrollRectMini_t58C8D9D06695FF8921AEC88C99FF285F2FF279BC;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
// System.String
struct String_t;
// UnityEngine.SystemInfo
struct SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// LeeFramework.Console.ConsoleAll/<>c
struct U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003;
// LeeFramework.Console.ConsoleAll/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36;
// LeeFramework.Console.ConsoleMini/<MoveTween>d__39
struct U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4B690BDF201EB3CF0158CE830287D891E3BCE0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral6C53AB1E9F50A9A6F110A6797117484FE84EB6F8;
IL2CPP_EXTERN_C String_t* _stringLiteral82845E67B5E12530128F5692B5527EE6C041456C;
IL2CPP_EXTERN_C String_t* _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D;
IL2CPP_EXTERN_C String_t* _stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralCA6E3FDAA3ECD3DF758EA8294AF4691F048EBCE2;
IL2CPP_EXTERN_C String_t* _stringLiteralD7B06C5A9908A37B4FD2FDA3F5D1B2D6A9361D1D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA552A92DA221411B13A7D344D508093A6FC6A6D;
IL2CPP_EXTERN_C String_t* _stringLiteralF440820E32896DBB9545A1A864B463C6D93ECFF4;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnClickClose_m6E72DC43347897AB2159E5E3280544B5004824FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnClickDelete_m06937C33BF00CC89CB715320D4943B4008EC63E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnClickInfo_mF5B2E867ED475995A9A488DC90CB7023F4E62B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnClickSelect_m4C265B36156E1EEF9C184542E4C854DEE0B3A58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnInitDone_mE7B627DA4601894DF6FAF4324BB6CA9735683F77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnInputSearch_m1A9550698063837C3F1EB011E962B027928371B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnRecycle_mCA02156C23F19104CEB2CBD6F21E4B588226F0F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnRefresh_m9EF60865530AB3585CCF5E8757A2C3ABA7858A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnTogError_mD20C22B54843D6F96EF85837E1D4EEB236A9CA00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnTogLog_mCBD2C75F5E6CFD7538EFF28344C1DB0A42F06D6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleAll_OnTogWarring_m696D27D774804098A9460DB11C3D63F6029ECE0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleBottom_OnClickClose_mF7CB745B624A735F8C13F3F24CF50E5EB4DB5B41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleBottom_OnClickCopy_mC39CC16DAB054AC5F694108DE70748B13768059F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleBottom_OnTogFps_mF02D8CA7ED20B62A5D085C6A4AE99F77CEE93BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleBottom_OnTogMono_mB6F06B9B706D8C7201DBB75FEC90B060DBF3AE9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleInfo_OnClickClose_m531BE71AFBA32424FF3B9D2304E922FB908E4B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleInfo_OnSldFontSize_mCB308A09B811B59A6AC73951EB66BD9C46639FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsoleInfo_RefreshInfo_m786482F0A86D31702F9861EA3FEEB88EA99D7419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m8FE437E28717C5FA5237BA1712D07256A992AE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m655AD9F9AD1A5D23EBCAC8252843A0D61405849C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB36BFDCD66BA28F89B44D530EBD1484E8D67FEAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC9D36C7410D11977BB504F92877AA397D78A5F7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m5D07437B26549A90ED07547C7C451604A9CEC05F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8732E83A9B6F0EBEBD9FA64F34A91E8970E42621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m14A22F14AA7A7FBF24E43AA9C563D2F1E6610403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFE385F96A66EE8E26F2B756B0B1048AAF750F853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA56DD696A58EDC9F803756578524920CE44BBBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE5007B6869F5FFD3A1F7041331C1948ACD70A49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF5C9D7B81ABE3ADA0E6E688D92F48F2C90E6E129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF6D07E83259517CC6CABD7910A05A14D969D6AA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLogView_t57E51D62335A30080544D55DC598B824BBEBA5E0_m16C3E84D34E52F42C3463EEA7153778481C01B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1B8349C38164F3899563EEA26484829B4D550239_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC2D697950F544095450C7C0974E20E8FE475D740_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mBBD70B5C6A39281FA3E089B5DEEF825EA356A8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m660D32D7C38BB32B9DEA06FA540E77A85347157A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mD6FC9ECB0D6F8BB2A20C6FA80511E614CD8F0309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m82908819FF091FAA2AFC40CD56DE29D96D461AB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF48F844452E8A0793C406D64CCEEDBC9AA0C10E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4E2B24F9E7AC4464B142695B52F86821F0B0C583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogMgr_LogCallback_m0B183A2DBA31D8F0B38FADC6DCEEC2AD77F80324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogView_OnClickLog_mEF80FF80E8B63A91E7CDE4086E37CEEDD8582CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m655297BADA38FFB6A008FEF1A927C7A1EADB3B40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m86665142A45B43BDAB817682404BA57144683F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m9DBD61C6C6EB749A96CFFB847DF115A6F9B2F191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mCFE80DDF36FD049462D3361929236321925B9C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveTweenU3Ed__39_System_Collections_IEnumerator_Reset_m2BE49AFD6ADA5C95DF8A83114FD728929999C382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResetAllLogViewBgU3Eb__35_0_m36C228DBE2C674BB3EB5F9EE6DC6CA922221536C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSelectAllCacheLogU3Eb__49_0_mBF2E57ABBF99776B64485BA52596F9F708015199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSelectSearchLogU3Eb__50_0_m34AE8DA175BBDFEC7FD23D7B724EBFC491973430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CShowFullLogU3Eb__0_m5AFC5C14066C0B99EDA4B4115FFA88167BA6B317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mD8F6804645AFB9C0DE48050B8506D81145D96CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE4CDEBB24230E96D3A092A9C7A874BB7E687A0FB 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>
struct Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6B7E171B9EC51861B4D18BDF97474F2B547F56CE* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE07DAA1DA2B6132E152D13E3F1FCE50C43575DF9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<LeeFramework.Console.Log>
struct List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LogU5BU5D_tC7A4AF86490BB0B709CB4EB2D30AED1B4FCF1D00* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<LeeFramework.Console.LogCache>
struct List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LogCacheU5BU5D_t3FFF4ABFA49C86EF6AE9692D4E2728CBB6A2DB79* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>
struct List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LoopItemU5BU5D_t134085D5CA0506AC66F6135FA3A2B9A19870B6A9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.Queue`1<LeeFramework.Console.Log>
struct Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	LogU5BU5D_tC7A4AF86490BB0B709CB4EB2D30AED1B4FCF1D00* ____array_0;
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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LeeFramework.Console.LogView>
struct ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.Application
struct Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21  : public RuntimeObject
{
};

// LeeFramework.Console.Log
struct Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA  : public RuntimeObject
{
	// System.String LeeFramework.Console.Log::condition
	String_t* ___condition_0;
	// System.String LeeFramework.Console.Log::stackTrace
	String_t* ___stackTrace_1;
	// UnityEngine.LogType LeeFramework.Console.Log::type
	int32_t ___type_2;
	// System.Int32 LeeFramework.Console.Log::index
	int32_t ___index_3;
};

// LeeFramework.Console.LogCache
struct LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E  : public RuntimeObject
{
	// System.Int32 LeeFramework.Console.LogCache::index
	int32_t ___index_0;
	// LeeFramework.Console.Log LeeFramework.Console.LogCache::log
	Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___log_1;
	// System.String LeeFramework.Console.LogCache::scene
	String_t* ___scene_2;
	// System.Int32 LeeFramework.Console.LogCache::fps
	int32_t ___fps_3;
	// System.Single LeeFramework.Console.LogCache::mono
	float ___mono_4;
	// System.Single LeeFramework.Console.LogCache::time
	float ___time_5;
	// System.Boolean LeeFramework.Console.LogCache::isFull
	bool ___isFull_6;
};

// LeeFramework.Console.LogMgr
struct LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297  : public RuntimeObject
{
	// System.Int32 LeeFramework.Console.LogMgr::_AllLogIndex
	int32_t ____AllLogIndex_0;
	// System.Collections.Generic.List`1<LeeFramework.Console.Log> LeeFramework.Console.LogMgr::_AllLogs
	List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* ____AllLogs_1;
	// System.Int32 LeeFramework.Console.LogMgr::_AllLog
	int32_t ____AllLog_2;
	// System.Int32 LeeFramework.Console.LogMgr::_AllWarring
	int32_t ____AllWarring_3;
	// System.Int32 LeeFramework.Console.LogMgr::_AllError
	int32_t ____AllError_4;
	// System.Collections.Generic.Queue`1<LeeFramework.Console.Log> LeeFramework.Console.LogMgr::_TmpLogs
	Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* ____TmpLogs_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames_0;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_1;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.SystemInfo
struct SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// LeeFramework.Console.ConsoleAll/<>c
struct U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003  : public RuntimeObject
{
};

// LeeFramework.Console.ConsoleAll/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36  : public RuntimeObject
{
	// System.Int32 LeeFramework.Console.ConsoleAll/<>c__DisplayClass32_0::index
	int32_t ___index_0;
};

// System.Collections.Generic.List`1/Enumerator<LeeFramework.Console.LogCache>
struct Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<LeeFramework.UILoopListMini.LoopItem>
struct Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,LeeFramework.Console.LogView>
struct Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// LeeFramework.Console.ConsoleMini/<MoveTween>d__39
struct U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501  : public RuntimeObject
{
	// System.Int32 LeeFramework.Console.ConsoleMini/<MoveTween>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeeFramework.Console.ConsoleMini/<MoveTween>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LeeFramework.Console.ConsoleMini LeeFramework.Console.ConsoleMini/<MoveTween>d__39::<>4__this
	ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* ___U3CU3E4__this_2;
	// UnityEngine.Vector2 LeeFramework.Console.ConsoleMini/<MoveTween>d__39::pos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos_3;
	// System.Single LeeFramework.Console.ConsoleMini/<MoveTween>d__39::<progress>5__2
	float ___U3CprogressU3E5__2_4;
	// UnityEngine.Vector2 LeeFramework.Console.ConsoleMini/<MoveTween>d__39::<initPos>5__3
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CinitPosU3E5__3_5;
};

// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>>
struct Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E  : public MulticastDelegate_t
{
};

// System.Action`1<LeeFramework.UILoopListMini.LoopItem>
struct Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485  : public MulticastDelegate_t
{
};

// System.Comparison`1<LeeFramework.Console.LogCache>
struct Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118  : public MulticastDelegate_t
{
};

// System.Predicate`1<LeeFramework.Console.LogCache>
struct Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// LeeFramework.Console.BottomExt
struct BottomExt_tBA3CED9CBF84E5B2CD50B7F277F4494F6345F255  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform LeeFramework.Console.BottomExt::rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect_4;
	// UnityEngine.RectTransform LeeFramework.Console.BottomExt::extRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___extRect_5;
	// UnityEngine.RectTransform LeeFramework.Console.BottomExt::moveRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___moveRect_6;
	// System.Boolean LeeFramework.Console.BottomExt::_IsDrag
	bool ____IsDrag_7;
	// UnityEngine.Vector2 LeeFramework.Console.BottomExt::_StartPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____StartPos_8;
};

// LeeFramework.Console.BottomMove
struct BottomMove_t700697ACA9F2B3D054405D20BBDDDB0A88C4644E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform LeeFramework.Console.BottomMove::rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect_4;
	// UnityEngine.RectTransform LeeFramework.Console.BottomMove::startRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___startRect_5;
	// UnityEngine.RectTransform LeeFramework.Console.BottomMove::moveRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___moveRect_6;
	// System.Boolean LeeFramework.Console.BottomMove::_IsDrag
	bool ____IsDrag_7;
	// UnityEngine.Vector2 LeeFramework.Console.BottomMove::_StartPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____StartPos_8;
};

// LeeFramework.Console.ConsoleAll
struct ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LeeFramework.UILoopListMini.LoopListMini LeeFramework.Console.ConsoleAll::loopListMini
	LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* ___loopListMini_4;
	// UnityEngine.UI.Button LeeFramework.Console.ConsoleAll::btnDelete
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnDelete_5;
	// UnityEngine.UI.InputField LeeFramework.Console.ConsoleAll::iptSearch
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___iptSearch_6;
	// UnityEngine.UI.Button LeeFramework.Console.ConsoleAll::btnInfo
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnInfo_7;
	// UnityEngine.UI.Toggle LeeFramework.Console.ConsoleAll::togLog
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___togLog_8;
	// UnityEngine.UI.Toggle LeeFramework.Console.ConsoleAll::togWarring
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___togWarring_9;
	// UnityEngine.UI.Toggle LeeFramework.Console.ConsoleAll::togError
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___togError_10;
	// UnityEngine.UI.Button LeeFramework.Console.ConsoleAll::btnClose
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnClose_11;
	// LeeFramework.UILoopListMini.ScrollRectMini LeeFramework.Console.ConsoleAll::scrollRect
	ScrollRectMini_t58C8D9D06695FF8921AEC88C99FF285F2FF279BC* ___scrollRect_12;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleAll::txtLogNum
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtLogNum_13;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleAll::txtWarringNum
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtWarringNum_14;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleAll::txtErrorNum
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtErrorNum_15;
	// UnityEngine.UI.Button LeeFramework.Console.ConsoleAll::btnSelect
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnSelect_16;
	// System.Boolean LeeFramework.Console.ConsoleAll::_IsLog
	bool ____IsLog_17;
	// System.Boolean LeeFramework.Console.ConsoleAll::_IsWarring
	bool ____IsWarring_18;
	// System.Boolean LeeFramework.Console.ConsoleAll::_IsError
	bool ____IsError_19;
	// System.String LeeFramework.Console.ConsoleAll::_SearchStr
	String_t* ____SearchStr_20;
	// System.Boolean LeeFramework.Console.ConsoleAll::_IsFps
	bool ____IsFps_21;
	// System.Boolean LeeFramework.Console.ConsoleAll::_IsMono
	bool ____IsMono_22;
	// System.Int32 LeeFramework.Console.ConsoleAll::_LogIndex
	int32_t ____LogIndex_23;
	// System.Int32 LeeFramework.Console.ConsoleAll::_SelectLogIndex
	int32_t ____SelectLogIndex_24;
	// UnityEngine.RectTransform LeeFramework.Console.ConsoleAll::_ViewsRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____ViewsRect_26;
	// System.Collections.Generic.List`1<LeeFramework.Console.LogCache> LeeFramework.Console.ConsoleAll::_AllLogCache
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* ____AllLogCache_27;
	// System.Collections.Generic.List`1<LeeFramework.Console.LogCache> LeeFramework.Console.ConsoleAll::_AllShowLogCache
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* ____AllShowLogCache_28;
	// System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView> LeeFramework.Console.ConsoleAll::_AllLoopItem
	Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* ____AllLoopItem_29;
	// UnityEngine.Color LeeFramework.Console.ConsoleAll::_ColTxtWhite
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____ColTxtWhite_30;
	// UnityEngine.Color LeeFramework.Console.ConsoleAll::_ColTxtGray
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____ColTxtGray_31;
};

// LeeFramework.Console.ConsoleBottom
struct ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform LeeFramework.Console.ConsoleBottom::rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect_4;
	// LeeFramework.Console.ConsoleAll LeeFramework.Console.ConsoleBottom::consoleAll
	ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* ___consoleAll_5;
	// UnityEngine.UI.Toggle LeeFramework.Console.ConsoleBottom::togMono
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___togMono_6;
	// UnityEngine.UI.Toggle LeeFramework.Console.ConsoleBottom::togFps
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___togFps_7;
	// UnityEngine.GameObject LeeFramework.Console.ConsoleBottom::goLogFull
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goLogFull_8;
	// UnityEngine.RectTransform LeeFramework.Console.ConsoleBottom::rectLogFull
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectLogFull_9;
	// UnityEngine.UI.Image LeeFramework.Console.ConsoleBottom::imgLogType
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgLogType_10;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleBottom::txtContent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtContent_11;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleBottom::txtTime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtTime_12;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleBottom::txtMono
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtMono_13;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleBottom::txtFps
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtFps_14;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleBottom::txtScene
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtScene_15;
	// UnityEngine.UI.Button LeeFramework.Console.ConsoleBottom::btnCopy
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnCopy_16;
	// UnityEngine.UI.Button LeeFramework.Console.ConsoleBottom::btnClose
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnClose_17;
	// LeeFramework.Console.LogCache LeeFramework.Console.ConsoleBottom::_LogCache
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ____LogCache_18;
};

// LeeFramework.Console.ConsoleInfo
struct ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button LeeFramework.Console.ConsoleInfo::btnClose
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnClose_4;
	// UnityEngine.UI.Button LeeFramework.Console.ConsoleInfo::btnFresh
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnFresh_5;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleInfo::txtAppDes
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtAppDes_6;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleInfo::txtApp
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtApp_7;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleInfo::txtSysDes
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtSysDes_8;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleInfo::txtSys
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtSys_9;
	// UnityEngine.UI.Slider LeeFramework.Console.ConsoleInfo::sldSize
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sldSize_10;
};

// LeeFramework.Console.ConsoleMini
struct ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas LeeFramework.Console.ConsoleMini::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_4;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleMini::txtFps
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtFps_5;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleMini::txtMono
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtMono_6;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleMini::txtTime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtTime_7;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleMini::txtVersion
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtVersion_8;
	// UnityEngine.UI.Image LeeFramework.Console.ConsoleMini::imgLogBg
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgLogBg_9;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleMini::txtLog
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtLog_10;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleMini::txtWarring
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtWarring_11;
	// UnityEngine.UI.Text LeeFramework.Console.ConsoleMini::txtError
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtError_12;
	// UnityEngine.Color LeeFramework.Console.ConsoleMini::colNormal
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colNormal_13;
	// UnityEngine.Color LeeFramework.Console.ConsoleMini::colLog
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colLog_14;
	// UnityEngine.Color LeeFramework.Console.ConsoleMini::colWarring
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colWarring_15;
	// UnityEngine.Color LeeFramework.Console.ConsoleMini::colError
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colError_16;
	// UnityEngine.CanvasGroup LeeFramework.Console.ConsoleMini::_CanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ____CanvasGroup_17;
	// System.Int32 LeeFramework.Console.ConsoleMini::_Log
	int32_t ____Log_18;
	// System.Int32 LeeFramework.Console.ConsoleMini::_Warring
	int32_t ____Warring_19;
	// System.Int32 LeeFramework.Console.ConsoleMini::_Error
	int32_t ____Error_20;
	// UnityEngine.Vector2 LeeFramework.Console.ConsoleMini::_HalfSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____HalfSize_21;
	// UnityEngine.RectTransform LeeFramework.Console.ConsoleMini::_CanvasRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____CanvasRect_22;
	// UnityEngine.Vector2 LeeFramework.Console.ConsoleMini::_CanvasSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____CanvasSize_23;
	// UnityEngine.RectTransform LeeFramework.Console.ConsoleMini::_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____Rect_24;
	// System.Boolean LeeFramework.Console.ConsoleMini::_IsDrag
	bool ____IsDrag_25;
	// UnityEngine.Coroutine LeeFramework.Console.ConsoleMini::_CorMove
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____CorMove_26;
};

// LeeFramework.Console.LogDetail
struct LogDetail_tDD7746A6F48E5DACFDC036129D2A578D60611CA1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text LeeFramework.Console.LogDetail::txtDetail
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtDetail_4;
};

// LeeFramework.Console.LogView
struct LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button LeeFramework.Console.LogView::btnContent
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnContent_4;
	// UnityEngine.UI.Text LeeFramework.Console.LogView::txtContent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtContent_5;
	// UnityEngine.UI.Image LeeFramework.Console.LogView::imgType
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgType_6;
	// UnityEngine.UI.Image LeeFramework.Console.LogView::imgFrame
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgFrame_7;
	// UnityEngine.UI.Image LeeFramework.Console.LogView::imgMono
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imgMono_8;
	// UnityEngine.UI.Text LeeFramework.Console.LogView::txtFps
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtFps_9;
	// UnityEngine.UI.Text LeeFramework.Console.LogView::txtMono
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtMono_10;
	// System.String LeeFramework.Console.LogView::_Tmp
	String_t* ____Tmp_11;
	// System.Int32 LeeFramework.Console.LogView::_Fps
	int32_t ____Fps_12;
	// System.Single LeeFramework.Console.LogView::_Mono
	float ____Mono_13;
	// LeeFramework.Console.LogCache LeeFramework.Console.LogView::_Cache
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ____Cache_14;
	// UnityEngine.Color LeeFramework.Console.LogView::_ColItemBlack
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____ColItemBlack_15;
	// UnityEngine.Color LeeFramework.Console.LogView::_ColItemWhite
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____ColItemWhite_16;
	// UnityEngine.Color LeeFramework.Console.LogView::_ColItemBlue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____ColItemBlue_17;
};

// LeeFramework.UILoopListMini.LoopItem
struct LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform LeeFramework.UILoopListMini.LoopItem::_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____Rect_4;
	// UnityEngine.RectTransform LeeFramework.UILoopListMini.LoopItem::_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____Content_5;
	// System.Int32 LeeFramework.UILoopListMini.LoopItem::_Id
	int32_t ____Id_6;
	// System.Int32 LeeFramework.UILoopListMini.LoopItem::_InstanceId
	int32_t ____InstanceId_7;
	// System.Int32 LeeFramework.UILoopListMini.LoopItem::_DataMaxCount
	int32_t ____DataMaxCount_8;
	// System.Single LeeFramework.UILoopListMini.LoopItem::_Offset
	float ____Offset_9;
	// System.Int32 LeeFramework.UILoopListMini.LoopItem::_ShowItemNum
	int32_t ____ShowItemNum_10;
	// LeeFramework.UILoopListMini.LoopType LeeFramework.UILoopListMini.LoopItem::_LoopType
	int32_t ____LoopType_11;
	// System.Action`1<LeeFramework.UILoopListMini.LoopItem> LeeFramework.UILoopListMini.LoopItem::_OnRefresh
	Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* ____OnRefresh_12;
	// System.Action`1<LeeFramework.UILoopListMini.LoopItem> LeeFramework.UILoopListMini.LoopItem::_OnRecycle
	Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* ____OnRecycle_13;
};

// LeeFramework.UILoopListMini.LoopListBase
struct LoopListBase_t342BCA842B45F1108BF7D4C5ABA3849457D18463  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LeeFramework.UILoopListMini.LoopType LeeFramework.UILoopListMini.LoopListBase::loopType
	int32_t ___loopType_4;
	// UnityEngine.GameObject LeeFramework.UILoopListMini.LoopListBase::item
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item_5;
	// System.Single LeeFramework.UILoopListMini.LoopListBase::offset
	float ___offset_6;
	// UnityEngine.RectTransform LeeFramework.UILoopListMini.LoopListBase::_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____Rect_7;
	// UnityEngine.RectTransform LeeFramework.UILoopListMini.LoopListBase::_ItemRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____ItemRect_8;
	// LeeFramework.UILoopListMini.ScrollRectMini LeeFramework.UILoopListMini.LoopListBase::_ScrollRect
	ScrollRectMini_t58C8D9D06695FF8921AEC88C99FF285F2FF279BC* ____ScrollRect_9;
	// System.Single LeeFramework.UILoopListMini.LoopListBase::_ScrollSize
	float ____ScrollSize_10;
	// System.Single LeeFramework.UILoopListMini.LoopListBase::_ItemSize
	float ____ItemSize_11;
	// System.Int32 LeeFramework.UILoopListMini.LoopListBase::_ShowCount
	int32_t ____ShowCount_12;
	// System.Int32 LeeFramework.UILoopListMini.LoopListBase::_DataMaxCount
	int32_t ____DataMaxCount_13;
	// System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem> LeeFramework.UILoopListMini.LoopListBase::_AllLoopItem
	List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED* ____AllLoopItem_14;
	// System.Boolean LeeFramework.UILoopListMini.LoopListBase::_IsInit
	bool ____IsInit_15;
	// System.Boolean LeeFramework.UILoopListMini.LoopListBase::_IsScrolling
	bool ____IsScrolling_16;
	// System.Single LeeFramework.UILoopListMini.LoopListBase::_ScrollTarget
	float ____ScrollTarget_17;
	// System.Single LeeFramework.UILoopListMini.LoopListBase::_ScrollTime
	float ____ScrollTime_18;
	// System.Action`1<System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>> LeeFramework.UILoopListMini.LoopListBase::_OnInitDone
	Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E* ____OnInitDone_19;
	// System.Action`1<LeeFramework.UILoopListMini.LoopItem> LeeFramework.UILoopListMini.LoopListBase::_OnRefresh
	Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* ____OnRefresh_20;
	// System.Action`1<LeeFramework.UILoopListMini.LoopItem> LeeFramework.UILoopListMini.LoopListBase::_OnRecycle
	Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* ____OnRecycle_21;
	// System.Boolean LeeFramework.UILoopListMini.LoopListBase::_IsAtBottom
	bool ____IsAtBottom_22;
};

// LeeFramework.Console.RuntimeConsole
struct RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LeeFramework.Console.ConsoleMini LeeFramework.Console.RuntimeConsole::consoleMini
	ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* ___consoleMini_5;
	// LeeFramework.Console.ConsoleAll LeeFramework.Console.RuntimeConsole::consoleAll
	ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* ___consoleAll_6;
	// LeeFramework.Console.ConsoleInfo LeeFramework.Console.RuntimeConsole::consoleInfo
	ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* ___consoleInfo_7;
	// LeeFramework.Console.ConsoleBottom LeeFramework.Console.RuntimeConsole::consoleBottom
	ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* ___consoleBottom_8;
	// UnityEngine.Sprite LeeFramework.Console.RuntimeConsole::spriteLog
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteLog_9;
	// UnityEngine.Sprite LeeFramework.Console.RuntimeConsole::spriteWarring
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteWarring_10;
	// UnityEngine.Sprite LeeFramework.Console.RuntimeConsole::spriteError
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___spriteError_11;
	// LeeFramework.Console.LogMgr LeeFramework.Console.RuntimeConsole::_LogMgr
	LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* ____LogMgr_12;
	// System.Boolean LeeFramework.Console.RuntimeConsole::_IsFirst
	bool ____IsFirst_13;
	// System.Single LeeFramework.Console.RuntimeConsole::_FrameTime
	float ____FrameTime_14;
	// System.Int32 LeeFramework.Console.RuntimeConsole::_Fps
	int32_t ____Fps_15;
	// System.Single LeeFramework.Console.RuntimeConsole::_Mono
	float ____Mono_16;
	// System.Single LeeFramework.Console.RuntimeConsole::_LastUpdate
	float ____LastUpdate_17;
	// System.Int32 LeeFramework.Console.RuntimeConsole::_Frames
	int32_t ____Frames_18;
	// System.Single LeeFramework.Console.RuntimeConsole::_MemorySize
	float ____MemorySize_19;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// LeeFramework.UILoopListMini.LoopListMini
struct LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271  : public LoopListBase_t342BCA842B45F1108BF7D4C5ABA3849457D18463
{
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// LeeFramework.UILoopListMini.ScrollRectMini
struct ScrollRectMini_t58C8D9D06695FF8921AEC88C99FF285F2FF279BC  : public ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E
{
	// System.Action`1<UnityEngine.EventSystems.PointerEventData> LeeFramework.UILoopListMini.ScrollRectMini::onInitializePotentialDrag
	Action_1_t5EFD410279BD84F1ADB35DF7BC8E54B56036EA41* ___onInitializePotentialDrag_41;
	// System.Action`1<UnityEngine.EventSystems.PointerEventData> LeeFramework.UILoopListMini.ScrollRectMini::onBeginDrag
	Action_1_t5EFD410279BD84F1ADB35DF7BC8E54B56036EA41* ___onBeginDrag_42;
	// System.Action`1<UnityEngine.EventSystems.PointerEventData> LeeFramework.UILoopListMini.ScrollRectMini::onDrag
	Action_1_t5EFD410279BD84F1ADB35DF7BC8E54B56036EA41* ___onDrag_43;
	// System.Action`1<UnityEngine.EventSystems.PointerEventData> LeeFramework.UILoopListMini.ScrollRectMini::onEndDrag
	Action_1_t5EFD410279BD84F1ADB35DF7BC8E54B56036EA41* ___onEndDrag_44;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>

// System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>

// System.Collections.Generic.List`1<LeeFramework.Console.Log>
struct List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LogU5BU5D_tC7A4AF86490BB0B709CB4EB2D30AED1B4FCF1D00* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LeeFramework.Console.Log>

// System.Collections.Generic.List`1<LeeFramework.Console.LogCache>
struct List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LogCacheU5BU5D_t3FFF4ABFA49C86EF6AE9692D4E2728CBB6A2DB79* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LeeFramework.Console.LogCache>

// System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>
struct List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LoopItemU5BU5D_t134085D5CA0506AC66F6135FA3A2B9A19870B6A9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.Queue`1<LeeFramework.Console.Log>

// System.Collections.Generic.Queue`1<LeeFramework.Console.Log>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LeeFramework.Console.LogView>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LeeFramework.Console.LogView>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.Application
struct Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_StaticFields
{
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F* ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___s_LogCallbackHandlerThreaded_2;
	// System.Action`1<System.Boolean> UnityEngine.Application::focusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___focusChanged_3;
	// System.Action`1<System.String> UnityEngine.Application::deepLinkActivated
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___deepLinkActivated_4;
	// System.Func`1<System.Boolean> UnityEngine.Application::wantsToQuit
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___wantsToQuit_5;
	// System.Action UnityEngine.Application::quitting
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___quitting_6;
	// System.Action UnityEngine.Application::unloading
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___unloading_7;
};

// UnityEngine.Application

// LeeFramework.Console.Log

// LeeFramework.Console.Log

// LeeFramework.Console.LogCache

// LeeFramework.Console.LogCache

// LeeFramework.Console.LogMgr

// LeeFramework.Console.LogMgr

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_3;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_4;
};

// System.Diagnostics.StackTrace

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SystemInfo

// UnityEngine.SystemInfo

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// LeeFramework.Console.ConsoleAll/<>c
struct U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields
{
	// LeeFramework.Console.ConsoleAll/<>c LeeFramework.Console.ConsoleAll/<>c::<>9
	U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* ___U3CU3E9_0;
	// System.Predicate`1<LeeFramework.Console.LogCache> LeeFramework.Console.ConsoleAll/<>c::<>9__35_0
	Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* ___U3CU3E9__35_0_1;
	// System.Comparison`1<LeeFramework.Console.LogCache> LeeFramework.Console.ConsoleAll/<>c::<>9__49_0
	Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* ___U3CU3E9__49_0_2;
	// System.Comparison`1<LeeFramework.Console.LogCache> LeeFramework.Console.ConsoleAll/<>c::<>9__50_0
	Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* ___U3CU3E9__50_0_3;
};

// LeeFramework.Console.ConsoleAll/<>c

// LeeFramework.Console.ConsoleAll/<>c__DisplayClass32_0

// LeeFramework.Console.ConsoleAll/<>c__DisplayClass32_0

// System.Collections.Generic.List`1/Enumerator<LeeFramework.Console.LogCache>

// System.Collections.Generic.List`1/Enumerator<LeeFramework.Console.LogCache>

// System.Collections.Generic.List`1/Enumerator<LeeFramework.UILoopListMini.LoopItem>

// System.Collections.Generic.List`1/Enumerator<LeeFramework.UILoopListMini.LoopItem>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,LeeFramework.Console.LogView>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,LeeFramework.Console.LogView>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

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

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// LeeFramework.Console.ConsoleMini/<MoveTween>d__39

// LeeFramework.Console.ConsoleMini/<MoveTween>d__39

// UnityEngine.UI.InputField/OnChangeEvent

// UnityEngine.UI.InputField/OnChangeEvent

// UnityEngine.UI.Slider/SliderEvent

// UnityEngine.UI.Slider/SliderEvent

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>>

// System.Action`1<System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>>

// System.Action`1<LeeFramework.UILoopListMini.LoopItem>

// System.Action`1<LeeFramework.UILoopListMini.LoopItem>

// System.Comparison`1<LeeFramework.Console.LogCache>

// System.Comparison`1<LeeFramework.Console.LogCache>

// System.Predicate`1<LeeFramework.Console.LogCache>

// System.Predicate`1<LeeFramework.Console.LogCache>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.String>

// UnityEngine.Events.UnityAction`1<System.String>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// LeeFramework.Console.BottomExt

// LeeFramework.Console.BottomExt

// LeeFramework.Console.BottomMove

// LeeFramework.Console.BottomMove

// LeeFramework.Console.ConsoleAll

// LeeFramework.Console.ConsoleAll

// LeeFramework.Console.ConsoleBottom

// LeeFramework.Console.ConsoleBottom

// LeeFramework.Console.ConsoleInfo

// LeeFramework.Console.ConsoleInfo

// LeeFramework.Console.ConsoleMini

// LeeFramework.Console.ConsoleMini

// LeeFramework.Console.LogDetail

// LeeFramework.Console.LogDetail

// LeeFramework.Console.LogView

// LeeFramework.Console.LogView

// LeeFramework.UILoopListMini.LoopItem

// LeeFramework.UILoopListMini.LoopItem

// LeeFramework.UILoopListMini.LoopListBase

// LeeFramework.UILoopListMini.LoopListBase

// LeeFramework.Console.RuntimeConsole
struct RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields
{
	// LeeFramework.Console.RuntimeConsole LeeFramework.Console.RuntimeConsole::instance
	RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* ___instance_4;
};

// LeeFramework.Console.RuntimeConsole

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// LeeFramework.UILoopListMini.LoopListMini

// LeeFramework.UILoopListMini.LoopListMini

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// LeeFramework.UILoopListMini.ScrollRectMini

// LeeFramework.UILoopListMini.ScrollRectMini

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___0_comparison, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_UpdateData_m685AEE62D48892DD082FB299B41F5DF8D68DE4D0 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_offsetMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_offsetMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___0_call, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::ResetAllLogViewBg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ResetAllLogViewBg_m22F0C36579B13E01E13DACB4482AE8E823CE7321 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleBottom::HideFullLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_HideFullLog_m2B185A0B990E28C03D2D275CFEE69FFB07073D62 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::ShowFps(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ShowFps_mD84841910106496B990D04AB672BF3365CAD7EC5 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::ShowMono(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ShowMono_mF4D52E2DD3D88E6330CA9642793BB83796489A3A (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleBottom::SetLogType(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_SetLogType_m02809C330B47B277ABD33817B8AC40744495DDC5 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Boolean LeeFramework.UILoopListMini.LoopListBase::get_isInit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LoopListBase_get_isInit_mD96936A587FF74201C022BCC444FE5F25CC63FD5_inline (LoopListBase_t342BCA842B45F1108BF7D4C5ABA3849457D18463* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<LeeFramework.Console.LogCache>::get_Count()
inline int32_t List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void LeeFramework.UILoopListMini.LoopListMini::UpdateData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C (LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* __this, int32_t ___0_maxCount, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogCache::.ctor(LeeFramework.Console.Log,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCache__ctor_m0289DF48CE6CA7B9B2C13B39395DDD6AAA2C09EF (LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* __this, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___0_l, int32_t ___1_i, int32_t ___2_fps, float ___3_mono, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LeeFramework.Console.LogCache>::Add(T)
inline void List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void LeeFramework.Console.ConsoleAll::AddShowLog(LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_AddShowLog_m2E7F8E5EDD5BA844830694A3526E5900EBBA404D (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_cache, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::UpdateLogNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_UpdateLogNum_m8E483B2C3175F2C4502CB9CB17159DB0FC6F9BAC (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m6E6BCD22DF1DA21423F1C2D751CC24B629622F23 (U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LeeFramework.Console.LogCache>::GetEnumerator()
inline Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B (*) (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LeeFramework.Console.LogCache>::Dispose()
inline void Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06 (Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<LeeFramework.Console.LogCache>::get_Current()
inline LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_inline (Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B* __this, const RuntimeMethod* method)
{
	return ((  LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* (*) (Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>::get_Values()
inline ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2* Dictionary_2_get_Values_m5D07437B26549A90ED07547C7C451604A9CEC05F (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2* (*) (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LeeFramework.Console.LogView>::GetEnumerator()
inline Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD ValueCollection_GetEnumerator_mD8F6804645AFB9C0DE48050B8506D81145D96CEF (ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD (*) (ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2*, const RuntimeMethod*))ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,LeeFramework.Console.LogView>::Dispose()
inline void Enumerator_Dispose_mFE385F96A66EE8E26F2B756B0B1048AAF750F853 (Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD*, const RuntimeMethod*))Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,LeeFramework.Console.LogView>::get_Current()
inline LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* Enumerator_get_Current_mF5C9D7B81ABE3ADA0E6E688D92F48F2C90E6E129_inline (Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD* __this, const RuntimeMethod* method)
{
	return ((  LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* (*) (Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD*, const RuntimeMethod*))Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline)(__this, method);
}
// LeeFramework.Console.LogCache LeeFramework.Console.LogView::get_logCache()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* LogView_get_logCache_mD9743D4DAD8C94A9760E38CECAB1392B20C0DCD3_inline (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogView::SetBgColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetBgColor_mF3D8308CBB21C1FF44E1B79A00C250668B8CF8D6 (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,LeeFramework.Console.LogView>::MoveNext()
inline bool Enumerator_MoveNext_mA56DD696A58EDC9F803756578524920CE44BBBCD (Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD*, const RuntimeMethod*))Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<LeeFramework.Console.LogCache>::MoveNext()
inline bool Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB (Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Predicate`1<LeeFramework.Console.LogCache>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mEC771E62B329CD07F868AC247FD3A90AA556675C (Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Collections.Generic.List`1<LeeFramework.Console.LogCache>::Find(System.Predicate`1<T>)
inline LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* List_1_Find_mBBD70B5C6A39281FA3E089B5DEEF825EA356A8AF (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* __this, Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* ___0_match, const RuntimeMethod* method)
{
	return ((  LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* (*) (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*, Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___0_match, method);
}
// System.Void LeeFramework.Console.ConsoleAll::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ResetView_m1D869E8A881C31DA659BC738A37962F6C03106D8 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleBottom::ShowFullLog(LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_ShowFullLog_m30FF6CBE141B9E75BF55BBD9C5072425C37FC926 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_log, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogView::SetFullBgColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetFullBgColor_m32FEAA4CA99DFCE4FF7DD418A0A18BC1A2DF8BFE (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m483E4F3EA935B55010C26C3BE13F6609581DAECF (Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<LeeFramework.UILoopListMini.LoopItem>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDE35C22860B0720A0C19926A3788FC61FF8803CF (Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void LeeFramework.UILoopListMini.LoopListMini::Init(System.Action`1<System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>>,System.Action`1<LeeFramework.UILoopListMini.LoopItem>,System.Action`1<LeeFramework.UILoopListMini.LoopItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopListMini_Init_m464669DCBE34AB7FBF1B62C16DF434B1C89C88DA (LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* __this, Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E* ___0_onDone, Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* ___1_onRefresh, Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* ___2_onRecycle, const RuntimeMethod* method) ;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>::Clear()
inline void Dictionary_2_Clear_m8FE437E28717C5FA5237BA1712D07256A992AE2F (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>::GetEnumerator()
inline Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB List_1_GetEnumerator_m660D32D7C38BB32B9DEA06FA540E77A85347157A (List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB (*) (List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LeeFramework.UILoopListMini.LoopItem>::Dispose()
inline void Enumerator_Dispose_m14A22F14AA7A7FBF24E43AA9C563D2F1E6610403 (Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<LeeFramework.UILoopListMini.LoopItem>::get_Current()
inline LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* Enumerator_get_Current_mF6D07E83259517CC6CABD7910A05A14D969D6AA1_inline (Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB* __this, const RuntimeMethod* method)
{
	return ((  LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* (*) (Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 LeeFramework.UILoopListMini.LoopItem::get_instanceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoopItem_get_instanceId_m5B2CF41D4C362288043326FD10ECE313CB27E184_inline (LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<LeeFramework.Console.LogView>()
inline LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* GameObject_GetComponent_TisLogView_t57E51D62335A30080544D55DC598B824BBEBA5E0_m16C3E84D34E52F42C3463EEA7153778481C01B18 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m8732E83A9B6F0EBEBD9FA64F34A91E8970E42621 (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* __this, int32_t ___0_key, LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C*, int32_t, LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<LeeFramework.UILoopListMini.LoopItem>::MoveNext()
inline bool Enumerator_MoveNext_mCE5007B6869F5FFD3A1F7041331C1948ACD70A49 (Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m655AD9F9AD1A5D23EBCAC8252843A0D61405849C (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// System.Int32 LeeFramework.UILoopListMini.LoopItem::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoopItem_get_id_mC73238D92DBD33964BD287B7761C245C082DA313_inline (LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<LeeFramework.Console.LogCache>::get_Item(System.Int32)
inline LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* List_1_get_Item_m4E2B24F9E7AC4464B142695B52F86821F0B0C583 (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* (*) (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>::get_Item(TKey)
inline LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* Dictionary_2_get_Item_mC9D36C7410D11977BB504F92877AA397D78A5F7C (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* (*) (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___0_key, method);
}
// System.Void LeeFramework.Console.LogView::SetLog(LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetLog_m356B061E629C7F7CC357B537AA2411F69C97699B (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_cache, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogView::ShowFps(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_ShowFps_m4910FBFF7BECE937E47910BA8AD5067481D0C47E (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogView::ShowMono(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_ShowMono_m0BE688F3F4AFAD7A669EAAA40B6CB9A3F24338AC (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean LeeFramework.Console.ConsoleAll::IsSearch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsoleAll_IsSearch_m8946F8D59FBEACB8A6A276E3BC5BCC0D3004B416 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) ;
// System.Boolean LeeFramework.Console.ConsoleAll::IsSearchLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsoleAll_IsSearchLog_m4C32B0DC544A896DE6F0103726D27FE0618D3C8E (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, String_t* ___0_condition, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LeeFramework.Console.LogCache>::Clear()
inline void List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_inline (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// LeeFramework.Console.LogMgr LeeFramework.Console.RuntimeConsole::get_logMgr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* RuntimeConsole_get_logMgr_m10418FE2135026A38116DE9887ACF5250254BE86_inline (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogMgr::ClearLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMgr_ClearLog_m04448B7A8638EE3FAE47AEFB86219626FB7EB426 (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::SelectSearchLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_SelectSearchLog_m6584BE39D11CF8B1353AE122D130A6793F875827 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, String_t* ___0_txt, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::OnTogLog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnTogLog_mCBD2C75F5E6CFD7538EFF28344C1DB0A42F06D6D (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::OnTogWarring(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnTogWarring_m696D27D774804098A9460DB11C3D63F6029ECE0D (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::OnTogError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnTogError_mD20C22B54843D6F96EF85837E1D4EEB236A9CA00 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleInfo::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_SetActive_mE0A3B759ECC41065B55213A04CACD88F54C815B9 (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::SelectAllCacheLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_SelectAllCacheLog_m52068E0685C46DB8644C08ED6E27B7A5A32D9406 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.RuntimeConsole::HideConsoleAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_HideConsoleAll_m1847D24C142E2E79B66DC10D9E8F9CFC62532D33 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.UILoopListMini.LoopListMini::ScrollToTarget(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopListMini_ScrollToTarget_m764C532184253B47841754086D2693B112B8D583 (LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* __this, float ___0_progress, float ___1_time, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<LeeFramework.Console.LogCache>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mCBA6AFEA3EDEDF281622F9DD87062442AF794DDD (Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Collections.Generic.List`1<LeeFramework.Console.LogCache>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_mD6FC9ECB0D6F8BB2A20C6FA80511E614CD8F0309 (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* __this, Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* ___0_comparison, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*, Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___0_comparison, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 LeeFramework.Console.LogMgr::get_allLog()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogMgr_get_allLog_m56E48103A68EC6632439434C984BFCF3681BFA9D_inline (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) ;
// System.Int32 LeeFramework.Console.LogMgr::get_allWarring()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogMgr_get_allWarring_mEE74908BF35D3590CA587C6919C05CCA43C76671_inline (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) ;
// System.Int32 LeeFramework.Console.LogMgr::get_allError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogMgr_get_allError_m88B26A4F922A2007CBF4744E915ED5E81246426C_inline (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LeeFramework.Console.LogCache>::.ctor()
inline void List_1__ctor_mF48F844452E8A0793C406D64CCEEDBC9AA0C10E4 (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LeeFramework.Console.LogView>::.ctor()
inline void Dictionary_2__ctor_mB36BFDCD66BA28F89B44D530EBD1484E8D67FEAC (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m376503AC91AB4F1348936F45EEB1E746103F8E85 (U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleInfo::RefreshInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_RefreshInfo_m786482F0A86D31702F9861EA3FEEB88EA99D7419 (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___0_call, method);
}
// System.Void LeeFramework.Console.ConsoleInfo::RefreshApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_RefreshApp_mEA127BE2D8BF0163570F479E2115F1AF646CB1BF (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleInfo::RefreshSys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_RefreshSys_mBCC17AB563FB93BDEEAADD3B613C784C8EA7A040 (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application__ctor_m7C98E7EEDC5A2B6E546168079C32F81499D090AF (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6 (Type_t* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088 (PropertyInfo_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SystemInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemInfo__ctor_m5DA71D3F1255A8AA68D9280DD79762048E3464A9 (SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::MoveToPos(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_MoveToPos_m4D98D62EBA79DEA54A26D57D94852B9733A9E2B4 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, bool ___0_imm, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::UpdateLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_UpdateLog_m7FA5D01693BEB34565FFAE26DE0FAA5CF33ADB6D (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::UpdateWarring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_UpdateWarring_m7181A0F3A1E40755D6E4A85F1FAF62227117EDE5 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::UpdateError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_UpdateError_mF08E17EA0C582D4173FE3F60A3BD0F2680598B4C (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.RuntimeConsole::ShowConsoleAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_ShowConsoleAll_mED43AD1C046EBA6A996C18C3680B4683CA8B1604 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LeeFramework.Console.ConsoleMini::MoveTween(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleMini_MoveTween_mD3B1EBE42CF23E572BDDD243AD69362B46E33683 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini/<MoveTween>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTweenU3Ed__39__ctor_m35497BE038C19135419B2A55882460D4C32BE0DB (U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LeeFramework.Console.Log>::.ctor()
inline void List_1__ctor_m82908819FF091FAA2AFC40CD56DE29D96D461AB1 (List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<LeeFramework.Console.Log>::.ctor()
inline void Queue_1__ctor_m9DBD61C6C6EB749A96CFFB847DF115A6F9B2F191 (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceivedThreaded_m1E3BD279C50197C83C34222FD135D91C3F3313E2 (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceivedThreaded_mDD8B873BF766306B205F549CF98249DD84FCA04C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m269D00E49783BC3205FD5C7E879888884D72107C (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, bool ___0_fNeedFileInfo, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.Log::.ctor(System.String,System.String,UnityEngine.LogType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m6F4F4F7E1240D0867C5B0754E49A2719E8761D38 (Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, int32_t ___3_index, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LeeFramework.Console.Log>::Add(T)
inline void List_1_Add_m1B8349C38164F3899563EEA26484829B4D550239_inline (List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* __this, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8*, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Queue`1<LeeFramework.Console.Log>::Enqueue(T)
inline void Queue_1_Enqueue_m86665142A45B43BDAB817682404BA57144683F20 (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* __this, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288*, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.Queue`1<LeeFramework.Console.Log>::get_Count()
inline int32_t Queue_1_get_Count_mCFE80DDF36FD049462D3361929236321925B9C44_inline (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<LeeFramework.Console.Log>::Dequeue()
inline Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* Queue_1_Dequeue_m655297BADA38FFB6A008FEF1A927C7A1EADB3B40 (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* __this, const RuntimeMethod* method)
{
	return ((  Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* (*) (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void LeeFramework.Console.RuntimeConsole::AddLog(LeeFramework.Console.Log)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_AddLog_mF7D4CFF061ABB8768CB6C1F73B8CAE91A4414EF4 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___0_log, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LeeFramework.Console.Log>::Clear()
inline void List_1_Clear_mC2D697950F544095450C7C0974E20E8FE475D740_inline (List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void LeeFramework.Console.ConsoleMini::ClearLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_ClearLog_m60EA70E39B70A893B2AE45E1D1817C892C8AD62E (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::ShowFullLog(LeeFramework.Console.LogView,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ShowFullLog_mF89A6D39AA3321332E0D5DBA33575F9572A8258E (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* ___0_view, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogView::SetLogType(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetLogType_m9C532CFC09F53D831DBFA1FA271B4F9070AE60AC (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogView::SetFps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetFps_m45F4522226D00DA1E712BBFF065EB20E6D67B9EB (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, int32_t ___0_fps, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogView::SetMono(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetMono_m4ADF8F843D39411EAA405157D950EDA29A0FA5EF (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, float ___0_mono, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogMgr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMgr__ctor_m4958520FE9F0E01A7F81A9B28A5B5CD40BAC5670 (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.LogMgr::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMgr_Update_mC44FDE84D111D5EEAAC0D2FFB29169705EB035B8 (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.RuntimeConsole::UpdateMini()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_UpdateMini_m2BE31B851936F6569CB44EBE98F647A8A6E60867 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::OnScreenDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_OnScreenDimensionsChange_m525B6D96F663968C3E45FFE081F77234D922AAE4 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.RuntimeConsole::UpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_UpdateTime_m4CE41C2520AB9474A3AEF60B85A4C5E28AD0431C (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.RuntimeConsole::UpdateMono()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_UpdateMono_m3ADA5115495C0E6AFE8F24FDCB20B13E52B083E6 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.RuntimeConsole::UpdateFps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_UpdateFps_m18AE2AF9F7095243C61AECF1B8E36253F1B3F372 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::SetTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_SetTime_m2FFF835F8B37F6BBAA72519CFBCE9D002CCFE167 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Profiling.Profiler::GetMonoUsedSizeLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Profiler_GetMonoUsedSizeLong_m0502757AA9D86F43BEE50352F6082F978AB1C973 (const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::SetMono(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_SetMono_m486846EB191BB59C15D23DCD7792E30D51FBB7F8 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, float ___0_mono, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::SetFsp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_SetFsp_mC78EDFD5D0DB6D9DC83F53CD3FFE333582E1DD73 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, int32_t ___0_fps, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::AddLog(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_AddLog_mA8E738DF59DBE62CA32714B398D6EAB2784B4013 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, int32_t ___0_logType, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::AddLog(LeeFramework.Console.Log,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_AddLog_m7716156C93E7E28C58F267B79F1B13E773C0264A (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___0_log, int32_t ___1_fps, float ___2_mono, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleMini::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_SetActive_mDD786354E1B289BF5F0C24DAF9502357A7A6F10D (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleAll::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_SetActive_mB981C428852FAD25C4D3A2C86B88DE874E2D5C03 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LeeFramework.Console.ConsoleBottom::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_SetActive_m78701A0465EA288E1FCF4F4BC525AFD458FDB4B2 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LeeFramework.Console.BottomExt::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomExt_OnBeginDrag_mE3BCEB3962DD368AC2C52CCEE71EC653FD28D875 (BottomExt_tBA3CED9CBF84E5B2CD50B7F277F4494F6345F255* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// _IsDrag = true;
		__this->____IsDrag_7 = (bool)1;
		// _StartPos = extRect.localPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___extRect_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		__this->____StartPos_8 = L_2;
		// }
		return;
	}
}
// System.Void LeeFramework.Console.BottomExt::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomExt_OnDrag_m8AD6CA0375B47B5DE66C59511F8EDF76D0426BF4 (BottomExt_tBA3CED9CBF84E5B2CD50B7F277F4494F6345F255* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, eventData.position, eventData.pressEventCamera, out pos))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___rect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// Vector2 offset = pos - _StartPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->____StartPos_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// rect.sizeDelta -= new Vector2(0, offset.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___rect_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.0f), L_13, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_11, L_14, NULL);
		NullCheck(L_10);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_10, L_15, NULL);
		// _StartPos = pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		__this->____StartPos_8 = L_16;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.BottomExt::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomExt_OnEndDrag_m7FC56B943C49333F0CB477D78706DCD15408BEDD (BottomExt_tBA3CED9CBF84E5B2CD50B7F277F4494F6345F255* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _IsDrag = false;
		__this->____IsDrag_7 = (bool)0;
		// _StartPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->____StartPos_8 = L_0;
		// RuntimeConsole.instance.consoleAll.UpdateData();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_1 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_2 = L_1->___consoleAll_6;
		NullCheck(L_2);
		ConsoleAll_UpdateData_m685AEE62D48892DD082FB299B41F5DF8D68DE4D0(L_2, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.BottomExt::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomExt_OnPointerClick_mBBE6876243CB236A72AC07AE5031B9CC1EF0B457 (BottomExt_tBA3CED9CBF84E5B2CD50B7F277F4494F6345F255* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_IsDrag)
		bool L_0 = __this->____IsDrag_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// moveRect.anchorMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___moveRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_1, L_2, NULL);
		// moveRect.anchorMax = Vector2.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___moveRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_3);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_3, L_4, NULL);
		// moveRect.offsetMin = new Vector2(moveRect.offsetMin.x, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___moveRect_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___moveRect_6;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B(L_6, NULL);
		float L_8 = L_7.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_5, L_9, NULL);
		// moveRect.offsetMax = new Vector2(moveRect.offsetMax.x, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___moveRect_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___moveRect_6;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73(L_11, NULL);
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_13, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_10, L_14, NULL);
		// RuntimeConsole.instance.consoleAll.UpdateData();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_15 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_15);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_16 = L_15->___consoleAll_6;
		NullCheck(L_16);
		ConsoleAll_UpdateData_m685AEE62D48892DD082FB299B41F5DF8D68DE4D0(L_16, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.BottomExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomExt__ctor_m1F889669E5BAD7F6FEF5817345A033A96546B9AF (BottomExt_tBA3CED9CBF84E5B2CD50B7F277F4494F6345F255* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 _StartPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->____StartPos_8 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeeFramework.Console.BottomMove::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomMove_OnBeginDrag_mA9F4779FFFC3AA9C7DEC2D30D6749DEFA3607FE2 (BottomMove_t700697ACA9F2B3D054405D20BBDDDB0A88C4644E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _IsDrag = true;
		__this->____IsDrag_7 = (bool)1;
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, startRect.position, eventData.pressEventCamera, out _StartPos);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___rect_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___startRect_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_eventData;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->____StartPos_8);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_3, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.BottomMove::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomMove_OnDrag_m7F206F815B698B36C3E110D8FEADA61F2B3A3A23 (BottomMove_t700697ACA9F2B3D054405D20BBDDDB0A88C4644E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, eventData.position, eventData.pressEventCamera, out pos))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___rect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// Vector2 offset = pos - _StartPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->____StartPos_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// moveRect.localPosition += new Vector3(offset.x, offset.y, 0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___moveRect_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		float L_15 = L_14.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_13, L_15, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_16, NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_17, NULL);
		// _StartPos = pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		__this->____StartPos_8 = L_18;
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.BottomMove::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomMove_OnEndDrag_m38D7FC465E6807FFCF8E70937B057307D01B4F30 (BottomMove_t700697ACA9F2B3D054405D20BBDDDB0A88C4644E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// _IsDrag = false;
		__this->____IsDrag_7 = (bool)0;
		// _StartPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->____StartPos_8 = L_0;
		// }
		return;
	}
}
// System.Void LeeFramework.Console.BottomMove::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomMove_OnPointerClick_mA3D28ECDB729FB6A4E9199F17DE520E89D08CAED (BottomMove_t700697ACA9F2B3D054405D20BBDDDB0A88C4644E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_IsDrag)
		bool L_0 = __this->____IsDrag_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// moveRect.anchorMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___moveRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_1, L_2, NULL);
		// moveRect.anchorMax = Vector2.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___moveRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		NullCheck(L_3);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_3, L_4, NULL);
		// moveRect.offsetMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___moveRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_5);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_5, L_6, NULL);
		// moveRect.offsetMax = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___moveRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_7);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_7, L_8, NULL);
		// RuntimeConsole.instance.consoleAll.UpdateData();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_9 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_9);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_10 = L_9->___consoleAll_6;
		NullCheck(L_10);
		ConsoleAll_UpdateData_m685AEE62D48892DD082FB299B41F5DF8D68DE4D0(L_10, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.BottomMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BottomMove__ctor_m177FE1EE584BB3075D2769B9FF5C2769FDAAE346 (BottomMove_t700697ACA9F2B3D054405D20BBDDDB0A88C4644E* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 _StartPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->____StartPos_8 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeeFramework.Console.ConsoleBottom::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_Awake_m365C2251E97D6220060B197BFC3D7399B7BE98BE (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleBottom_OnClickClose_mF7CB745B624A735F8C13F3F24CF50E5EB4DB5B41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleBottom_OnClickCopy_mC39CC16DAB054AC5F694108DE70748B13768059F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleBottom_OnTogFps_mF02D8CA7ED20B62A5D085C6A4AE99F77CEE93BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleBottom_OnTogMono_mB6F06B9B706D8C7201DBB75FEC90B060DBF3AE9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// togMono.onValueChanged.AddListener(OnTogMono);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___togMono_6;
		NullCheck(L_0);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)ConsoleBottom_OnTogMono_mB6F06B9B706D8C7201DBB75FEC90B060DBF3AE9A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_1, L_2, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// togFps.onValueChanged.AddListener(OnTogFps);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___togFps_7;
		NullCheck(L_3);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_4 = L_3->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_5 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_5, __this, (intptr_t)((void*)ConsoleBottom_OnTogFps_mF02D8CA7ED20B62A5D085C6A4AE99F77CEE93BC4_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_4, L_5, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// btnCopy.onClick.AddListener(OnClickCopy);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___btnCopy_16;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)ConsoleBottom_OnClickCopy_mC39CC16DAB054AC5F694108DE70748B13768059F_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// btnClose.onClick.AddListener(OnClickClose);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___btnClose_17;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)ConsoleBottom_OnClickClose_mF7CB745B624A735F8C13F3F24CF50E5EB4DB5B41_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::OnClickCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_OnClickCopy_mC39CC16DAB054AC5F694108DE70748B13768059F (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_LogCache != null)
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = __this->____LogCache_18;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// string content = string.Format("{0}\n{1}", _LogCache.log.condition, _LogCache.log.stackTrace);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_1 = __this->____LogCache_18;
		NullCheck(L_1);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_2 = L_1->___log_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___condition_0;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_4 = __this->____LogCache_18;
		NullCheck(L_4);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_5 = L_4->___log_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->___stackTrace_1;
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_3, L_6, NULL);
		// GUIUtility.systemCopyBuffer = content;
		GUIUtility_set_systemCopyBuffer_mD14AE32BFEA4773BDC679205D470A228B8F225E8(L_7, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::OnClickClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_OnClickClose_mF7CB745B624A735F8C13F3F24CF50E5EB4DB5B41 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RuntimeConsole.instance.consoleAll.ResetAllLogViewBg();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_0 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_1 = L_0->___consoleAll_6;
		NullCheck(L_1);
		ConsoleAll_ResetAllLogViewBg_m22F0C36579B13E01E13DACB4482AE8E823CE7321(L_1, NULL);
		// HideFullLog();
		ConsoleBottom_HideFullLog_m2B185A0B990E28C03D2D275CFEE69FFB07073D62(__this, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::OnTogFps(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_OnTogFps_mF02D8CA7ED20B62A5D085C6A4AE99F77CEE93BC4 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// consoleAll.ShowFps(value);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_0 = __this->___consoleAll_5;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		ConsoleAll_ShowFps_mD84841910106496B990D04AB672BF3365CAD7EC5(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::OnTogMono(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_OnTogMono_mB6F06B9B706D8C7201DBB75FEC90B060DBF3AE9A (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// consoleAll.ShowMono(value);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_0 = __this->___consoleAll_5;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		ConsoleAll_ShowMono_mF4D52E2DD3D88E6330CA9642793BB83796489A3A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_SetActive_m78701A0465EA288E1FCF4F4BC525AFD458FDB4B2 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::ShowFullLog(LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_ShowFullLog_m30FF6CBE141B9E75BF55BBD9C5072425C37FC926 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_log, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B690BDF201EB3CF0158CE830287D891E3BCE0AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _LogCache = log;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = ___0_log;
		__this->____LogCache_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____LogCache_18), (void*)L_0);
		// goLogFull.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___goLogFull_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// txtContent.text = string.Format("<b>{0}</b>\n<size=12>{1}</size>", log.log.condition, log.log.stackTrace);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___txtContent_11;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_3 = ___0_log;
		NullCheck(L_3);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_4 = L_3->___log_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->___condition_0;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_6 = ___0_log;
		NullCheck(L_6);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_7 = L_6->___log_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___stackTrace_1;
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral4B690BDF201EB3CF0158CE830287D891E3BCE0AA, L_5, L_8, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_9);
		// txtScene.text = log.scene;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___txtScene_15;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_11 = ___0_log;
		NullCheck(L_11);
		String_t* L_12 = L_11->___scene_2;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// txtTime.text = log.time.ToString("0.00");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___txtTime_12;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_14 = ___0_log;
		NullCheck(L_14);
		float* L_15 = (&L_14->___time_5);
		String_t* L_16;
		L_16 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_15, _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_16);
		// txtMono.text = log.mono.ToString("0.0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___txtMono_13;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_18 = ___0_log;
		NullCheck(L_18);
		float* L_19 = (&L_18->___mono_4);
		String_t* L_20;
		L_20 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_19, _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_20);
		// txtFps.text = log.fps.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___txtFps_14;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_22 = ___0_log;
		NullCheck(L_22);
		int32_t* L_23 = (&L_22->___fps_3);
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_23, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_24);
		// SetLogType(log.log.type);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_25 = ___0_log;
		NullCheck(L_25);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_26 = L_25->___log_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->___type_2;
		ConsoleBottom_SetLogType_m02809C330B47B277ABD33817B8AC40744495DDC5(__this, L_27, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::SetLogType(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_SetLogType_m02809C330B47B277ABD33817B8AC40744495DDC5 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_type;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_001b;
			}
			case 4:
			{
				goto IL_0047;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		// imgLogType.sprite = RuntimeConsole.instance.spriteLog;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imgLogType_10;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_2 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___spriteLog_9;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_3, NULL);
		// break;
		return;
	}

IL_0031:
	{
		// imgLogType.sprite = RuntimeConsole.instance.spriteWarring;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imgLogType_10;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_5 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = L_5->___spriteWarring_10;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_6, NULL);
		// break;
		return;
	}

IL_0047:
	{
		// imgLogType.sprite = RuntimeConsole.instance.spriteError;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___imgLogType_10;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_8 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = L_8->___spriteError_11;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::HideFullLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom_HideFullLog_m2B185A0B990E28C03D2D275CFEE69FFB07073D62 (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, const RuntimeMethod* method) 
{
	{
		// goLogFull.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___goLogFull_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleBottom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleBottom__ctor_mB3542BC98715DF9F660AC1F090533D8A4F41F46A (ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeeFramework.Console.ConsoleAll::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_SetActive_mB981C428852FAD25C4D3A2C86B88DE874E2D5C03 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// if (loopListMini.isInit)
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_2 = __this->___loopListMini_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = LoopListBase_get_isInit_mD96936A587FF74201C022BCC444FE5F25CC63FD5_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_4 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_5 = __this->____AllShowLogCache_28;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_5, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_4);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_4, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::AddLog(LeeFramework.Console.Log,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_AddLog_m7716156C93E7E28C58F267B79F1B13E773C0264A (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___0_log, int32_t ___1_fps, float ___2_mono, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* V_0 = NULL;
	{
		// _LogIndex++;
		int32_t L_0 = __this->____LogIndex_23;
		__this->____LogIndex_23 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// LogCache cache = new LogCache(log, _LogIndex, fps, mono);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_1 = ___0_log;
		int32_t L_2 = __this->____LogIndex_23;
		int32_t L_3 = ___1_fps;
		float L_4 = ___2_mono;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_5 = (LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E*)il2cpp_codegen_object_new(LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LogCache__ctor_m0289DF48CE6CA7B9B2C13B39395DDD6AAA2C09EF(L_5, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// _AllLogCache.Add(cache);
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_6 = __this->____AllLogCache_27;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_6, L_7, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
		// AddShowLog(cache);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_8 = V_0;
		ConsoleAll_AddShowLog_m2E7F8E5EDD5BA844830694A3526E5900EBBA404D(__this, L_8, NULL);
		// UpdateLogNum();
		ConsoleAll_UpdateLogNum_m8E483B2C3175F2C4502CB9CB17159DB0FC6F9BAC(__this, NULL);
		// if (loopListMini.isInit)
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_9 = __this->___loopListMini_4;
		NullCheck(L_9);
		bool L_10;
		L_10 = LoopListBase_get_isInit_mD96936A587FF74201C022BCC444FE5F25CC63FD5_inline(L_9, NULL);
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_11 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_12 = __this->____AllShowLogCache_28;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_12, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_11);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_11, L_13, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::ShowFps(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ShowFps_mD84841910106496B990D04AB672BF3365CAD7EC5 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _IsFps = value;
		bool L_0 = ___0_value;
		__this->____IsFps_21 = L_0;
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_1 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_2 = __this->____AllShowLogCache_28;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_2, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_1);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::ShowMono(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ShowMono_mF4D52E2DD3D88E6330CA9642793BB83796489A3A (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _IsMono = value;
		bool L_0 = ___0_value;
		__this->____IsMono_22 = L_0;
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_1 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_2 = __this->____AllShowLogCache_28;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_2, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_1);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::ShowFullLog(LeeFramework.Console.LogView,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ShowFullLog_mF89A6D39AA3321332E0D5DBA33575F9572A8258E (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* ___0_view, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m5D07437B26549A90ED07547C7C451604A9CEC05F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFE385F96A66EE8E26F2B756B0B1048AAF750F853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA56DD696A58EDC9F803756578524920CE44BBBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF5C9D7B81ABE3ADA0E6E688D92F48F2C90E6E129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mBBD70B5C6A39281FA3E089B5DEEF825EA356A8AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CShowFullLogU3Eb__0_m5AFC5C14066C0B99EDA4B4115FFA88167BA6B317_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mD8F6804645AFB9C0DE48050B8506D81145D96CEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* V_0 = NULL;
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* V_1 = NULL;
	Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B V_2;
	memset((&V_2), 0, sizeof(V_2));
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* V_3 = NULL;
	Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD V_4;
	memset((&V_4), 0, sizeof(V_4));
	LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* V_5 = NULL;
	float V_6 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* L_0 = (U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass32_0__ctor_m6E6BCD22DF1DA21423F1C2D751CC24B629622F23(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* L_1 = V_0;
		int32_t L_2 = ___1_index;
		NullCheck(L_1);
		L_1->___index_0 = L_2;
		// foreach (LogCache cache in _AllLogCache)
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_3 = __this->____AllLogCache_27;
		NullCheck(L_3);
		Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B L_4;
		L_4 = List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B(L_3, List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06((&V_2), Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a3_1;
			}

IL_001e_1:
			{
				// foreach (LogCache cache in _AllLogCache)
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_5;
				L_5 = Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_inline((&V_2), Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_RuntimeMethod_var);
				V_3 = L_5;
				// if (cache.isFull && cache.index != index)
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_6 = V_3;
				NullCheck(L_6);
				bool L_7 = L_6->___isFull_6;
				if (!L_7)
				{
					goto IL_00a3_1;
				}
			}
			{
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_8 = V_3;
				NullCheck(L_8);
				int32_t L_9 = L_8->___index_0;
				U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* L_10 = V_0;
				NullCheck(L_10);
				int32_t L_11 = L_10->___index_0;
				if ((((int32_t)L_9) == ((int32_t)L_11)))
				{
					goto IL_00a3_1;
				}
			}
			{
				// cache.isFull = false;
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_12 = V_3;
				NullCheck(L_12);
				L_12->___isFull_6 = (bool)0;
				// foreach (LogView item in _AllLoopItem.Values)
				Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* L_13 = __this->____AllLoopItem_29;
				NullCheck(L_13);
				ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2* L_14;
				L_14 = Dictionary_2_get_Values_m5D07437B26549A90ED07547C7C451604A9CEC05F(L_13, Dictionary_2_get_Values_m5D07437B26549A90ED07547C7C451604A9CEC05F_RuntimeMethod_var);
				NullCheck(L_14);
				Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD L_15;
				L_15 = ValueCollection_GetEnumerator_mD8F6804645AFB9C0DE48050B8506D81145D96CEF(L_14, ValueCollection_GetEnumerator_mD8F6804645AFB9C0DE48050B8506D81145D96CEF_RuntimeMethod_var);
				V_4 = L_15;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0095_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mFE385F96A66EE8E26F2B756B0B1048AAF750F853((&V_4), Enumerator_Dispose_mFE385F96A66EE8E26F2B756B0B1048AAF750F853_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_008a_2;
					}

IL_0057_2:
					{
						// foreach (LogView item in _AllLoopItem.Values)
						LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_16;
						L_16 = Enumerator_get_Current_mF5C9D7B81ABE3ADA0E6E688D92F48F2C90E6E129_inline((&V_4), Enumerator_get_Current_mF5C9D7B81ABE3ADA0E6E688D92F48F2C90E6E129_RuntimeMethod_var);
						V_5 = L_16;
						// if (item.logCache != null && item.logCache.index == cache.index)
						LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_17 = V_5;
						NullCheck(L_17);
						LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_18;
						L_18 = LogView_get_logCache_mD9743D4DAD8C94A9760E38CECAB1392B20C0DCD3_inline(L_17, NULL);
						if (!L_18)
						{
							goto IL_008a_2;
						}
					}
					{
						LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_19 = V_5;
						NullCheck(L_19);
						LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_20;
						L_20 = LogView_get_logCache_mD9743D4DAD8C94A9760E38CECAB1392B20C0DCD3_inline(L_19, NULL);
						NullCheck(L_20);
						int32_t L_21 = L_20->___index_0;
						LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_22 = V_3;
						NullCheck(L_22);
						int32_t L_23 = L_22->___index_0;
						if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
						{
							goto IL_008a_2;
						}
					}
					{
						// item.SetBgColor(cache.index);
						LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_24 = V_5;
						LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_25 = V_3;
						NullCheck(L_25);
						int32_t L_26 = L_25->___index_0;
						NullCheck(L_24);
						LogView_SetBgColor_mF3D8308CBB21C1FF44E1B79A00C250668B8CF8D6(L_24, L_26, NULL);
					}

IL_008a_2:
					{
						// foreach (LogView item in _AllLoopItem.Values)
						bool L_27;
						L_27 = Enumerator_MoveNext_mA56DD696A58EDC9F803756578524920CE44BBBCD((&V_4), Enumerator_MoveNext_mA56DD696A58EDC9F803756578524920CE44BBBCD_RuntimeMethod_var);
						if (L_27)
						{
							goto IL_0057_2;
						}
					}
					{
						goto IL_00a3_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a3_1:
			{
				// foreach (LogCache cache in _AllLogCache)
				bool L_28;
				L_28 = Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB((&V_2), Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		// LogCache log = _AllLogCache.Find(x => x.index == index);
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_29 = __this->____AllLogCache_27;
		U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* L_30 = V_0;
		Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* L_31 = (Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859*)il2cpp_codegen_object_new(Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Predicate_1__ctor_mEC771E62B329CD07F868AC247FD3A90AA556675C(L_31, L_30, (intptr_t)((void*)U3CU3Ec__DisplayClass32_0_U3CShowFullLogU3Eb__0_m5AFC5C14066C0B99EDA4B4115FFA88167BA6B317_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_32;
		L_32 = List_1_Find_mBBD70B5C6A39281FA3E089B5DEEF825EA356A8AF(L_29, L_31, List_1_Find_mBBD70B5C6A39281FA3E089B5DEEF825EA356A8AF_RuntimeMethod_var);
		V_1 = L_32;
		// if (log.isFull)
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_33 = V_1;
		NullCheck(L_33);
		bool L_34 = L_33->___isFull_6;
		if (!L_34)
		{
			goto IL_0125;
		}
	}
	{
		// log.isFull = false;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_35 = V_1;
		NullCheck(L_35);
		L_35->___isFull_6 = (bool)0;
		// _SelectLogIndex = -1;
		__this->____SelectLogIndex_24 = (-1);
		// RuntimeConsole.instance.consoleBottom.HideFullLog();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_36 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_36);
		ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* L_37 = L_36->___consoleBottom_8;
		NullCheck(L_37);
		ConsoleBottom_HideFullLog_m2B185A0B990E28C03D2D275CFEE69FFB07073D62(L_37, NULL);
		// ResetView();
		ConsoleAll_ResetView_m1D869E8A881C31DA659BC738A37962F6C03106D8(__this, NULL);
		// view.SetBgColor(index);
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_38 = ___0_view;
		U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = L_39->___index_0;
		NullCheck(L_38);
		LogView_SetBgColor_mF3D8308CBB21C1FF44E1B79A00C250668B8CF8D6(L_38, L_40, NULL);
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_41 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_42 = __this->____AllShowLogCache_28;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_42, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_41);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_41, L_43, NULL);
		return;
	}

IL_0125:
	{
		// log.isFull = true;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_44 = V_1;
		NullCheck(L_44);
		L_44->___isFull_6 = (bool)1;
		// _SelectLogIndex = index;
		U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = L_45->___index_0;
		__this->____SelectLogIndex_24 = L_46;
		// RuntimeConsole.instance.consoleBottom.ShowFullLog(log);
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_47 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_47);
		ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* L_48 = L_47->___consoleBottom_8;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_49 = V_1;
		NullCheck(L_48);
		ConsoleBottom_ShowFullLog_m30FF6CBE141B9E75BF55BBD9C5072425C37FC926(L_48, L_49, NULL);
		// float h = RuntimeConsole.instance.consoleBottom.rect.rect.height + RuntimeConsole.instance.consoleBottom.rectLogFull.rect.height;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_50 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_50);
		ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* L_51 = L_50->___consoleBottom_8;
		NullCheck(L_51);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_52 = L_51->___rect_4;
		NullCheck(L_52);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_53;
		L_53 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_52, NULL);
		V_7 = L_53;
		float L_54;
		L_54 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_7), NULL);
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_55 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_55);
		ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* L_56 = L_55->___consoleBottom_8;
		NullCheck(L_56);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_57 = L_56->___rectLogFull_9;
		NullCheck(L_57);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_58;
		L_58 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_57, NULL);
		V_7 = L_58;
		float L_59;
		L_59 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_7), NULL);
		V_6 = ((float)il2cpp_codegen_add(L_54, L_59));
		// _ViewsRect.offsetMin = new Vector2(0, h);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60 = __this->____ViewsRect_26;
		float L_61 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_62), (0.0f), L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_60, L_62, NULL);
		// view.SetFullBgColor();
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_63 = ___0_view;
		NullCheck(L_63);
		LogView_SetFullBgColor_m32FEAA4CA99DFCE4FF7DD418A0A18BC1A2DF8BFE(L_63, NULL);
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_64 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_65 = __this->____AllShowLogCache_28;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_65, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_64);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_64, L_66, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ResetView_m1D869E8A881C31DA659BC738A37962F6C03106D8 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _ViewsRect.offsetMin = new Vector2(0, RuntimeConsole.instance.consoleBottom.rect.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____ViewsRect_26;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_1 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* L_2 = L_1->___consoleBottom_8;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = L_2->___rect_4;
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_3, NULL);
		V_0 = L_4;
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_UpdateData_m685AEE62D48892DD082FB299B41F5DF8D68DE4D0 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_0 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_1 = __this->____AllShowLogCache_28;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_1, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_0);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::ResetAllLogViewBg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_ResetAllLogViewBg_m22F0C36579B13E01E13DACB4482AE8E823CE7321 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m5D07437B26549A90ED07547C7C451604A9CEC05F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFE385F96A66EE8E26F2B756B0B1048AAF750F853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA56DD696A58EDC9F803756578524920CE44BBBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF5C9D7B81ABE3ADA0E6E688D92F48F2C90E6E129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mBBD70B5C6A39281FA3E089B5DEEF825EA356A8AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResetAllLogViewBgU3Eb__35_0_m36C228DBE2C674BB3EB5F9EE6DC6CA922221536C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mD8F6804645AFB9C0DE48050B8506D81145D96CEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* V_0 = NULL;
	LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* V_1 = NULL;
	Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD V_2;
	memset((&V_2), 0, sizeof(V_2));
	LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* V_3 = NULL;
	Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* G_B2_0 = NULL;
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* G_B2_1 = NULL;
	Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* G_B1_0 = NULL;
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* G_B1_1 = NULL;
	{
		// LogCache log = _AllLogCache.Find(x => x.isFull);
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_0 = __this->____AllLogCache_27;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* L_1 = ((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__35_0_1;
		Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* L_3 = ((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* L_4 = (Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859*)il2cpp_codegen_object_new(Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Predicate_1__ctor_mEC771E62B329CD07F868AC247FD3A90AA556675C(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CResetAllLogViewBgU3Eb__35_0_m36C228DBE2C674BB3EB5F9EE6DC6CA922221536C_RuntimeMethod_var), NULL);
		Predicate_1_t8D38591BCB219630CD698C03C3C03D2BB51AE859* L_5 = L_4;
		((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__35_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__35_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_6;
		L_6 = List_1_Find_mBBD70B5C6A39281FA3E089B5DEEF825EA356A8AF(G_B2_1, G_B2_0, List_1_Find_mBBD70B5C6A39281FA3E089B5DEEF825EA356A8AF_RuntimeMethod_var);
		V_0 = L_6;
		// if (log != null)
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_7 = V_0;
		if (!L_7)
		{
			goto IL_00bd;
		}
	}
	{
		// log.isFull = false;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_8 = V_0;
		NullCheck(L_8);
		L_8->___isFull_6 = (bool)0;
		// LogView view = null;
		V_1 = (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0*)NULL;
		// foreach (LogView item in _AllLoopItem.Values)
		Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* L_9 = __this->____AllLoopItem_29;
		NullCheck(L_9);
		ValueCollection_t44E9E225E38FC703B4D13B3E24A7843A427BA2F2* L_10;
		L_10 = Dictionary_2_get_Values_m5D07437B26549A90ED07547C7C451604A9CEC05F(L_9, Dictionary_2_get_Values_m5D07437B26549A90ED07547C7C451604A9CEC05F_RuntimeMethod_var);
		NullCheck(L_10);
		Enumerator_t35F39D8BB87AA058F7CF4324AD7D955B902F56BD L_11;
		L_11 = ValueCollection_GetEnumerator_mD8F6804645AFB9C0DE48050B8506D81145D96CEF(L_10, ValueCollection_GetEnumerator_mD8F6804645AFB9C0DE48050B8506D81145D96CEF_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFE385F96A66EE8E26F2B756B0B1048AAF750F853((&V_2), Enumerator_Dispose_mFE385F96A66EE8E26F2B756B0B1048AAF750F853_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006c_1;
			}

IL_004d_1:
			{
				// foreach (LogView item in _AllLoopItem.Values)
				LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_12;
				L_12 = Enumerator_get_Current_mF5C9D7B81ABE3ADA0E6E688D92F48F2C90E6E129_inline((&V_2), Enumerator_get_Current_mF5C9D7B81ABE3ADA0E6E688D92F48F2C90E6E129_RuntimeMethod_var);
				V_3 = L_12;
				// if (item.logCache.index == log.index)
				LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_13 = V_3;
				NullCheck(L_13);
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_14;
				L_14 = LogView_get_logCache_mD9743D4DAD8C94A9760E38CECAB1392B20C0DCD3_inline(L_13, NULL);
				NullCheck(L_14);
				int32_t L_15 = L_14->___index_0;
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_16 = V_0;
				NullCheck(L_16);
				int32_t L_17 = L_16->___index_0;
				if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
				{
					goto IL_006c_1;
				}
			}
			{
				// view = item;
				LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_18 = V_3;
				V_1 = L_18;
				// break;
				goto IL_0085;
			}

IL_006c_1:
			{
				// foreach (LogView item in _AllLoopItem.Values)
				bool L_19;
				L_19 = Enumerator_MoveNext_mA56DD696A58EDC9F803756578524920CE44BBBCD((&V_2), Enumerator_MoveNext_mA56DD696A58EDC9F803756578524920CE44BBBCD_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_004d_1;
				}
			}
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// if (view != null)
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_009a;
		}
	}
	{
		// view.SetBgColor(log.index);
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_22 = V_1;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___index_0;
		NullCheck(L_22);
		LogView_SetBgColor_mF3D8308CBB21C1FF44E1B79A00C250668B8CF8D6(L_22, L_24, NULL);
	}

IL_009a:
	{
		// _SelectLogIndex = -1;
		__this->____SelectLogIndex_24 = (-1);
		// ResetView();
		ConsoleAll_ResetView_m1D869E8A881C31DA659BC738A37962F6C03106D8(__this, NULL);
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_25 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_26 = __this->____AllShowLogCache_28;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_26, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_25);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_25, L_27, NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_Start_m9D03C47BDC1B6228158917A8A5D6EF6C7B3560F1 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnClickClose_m6E72DC43347897AB2159E5E3280544B5004824FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnClickDelete_m06937C33BF00CC89CB715320D4943B4008EC63E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnClickInfo_mF5B2E867ED475995A9A488DC90CB7023F4E62B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnClickSelect_m4C265B36156E1EEF9C184542E4C854DEE0B3A58D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnInitDone_mE7B627DA4601894DF6FAF4324BB6CA9735683F77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnInputSearch_m1A9550698063837C3F1EB011E962B027928371B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnRecycle_mCA02156C23F19104CEB2CBD6F21E4B588226F0F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnRefresh_m9EF60865530AB3585CCF5E8757A2C3ABA7858A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnTogError_mD20C22B54843D6F96EF85837E1D4EEB236A9CA00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnTogLog_mCBD2C75F5E6CFD7538EFF28344C1DB0A42F06D6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleAll_OnTogWarring_m696D27D774804098A9460DB11C3D63F6029ECE0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _ViewsRect = scrollRect.GetComponent<RectTransform>();
		ScrollRectMini_t58C8D9D06695FF8921AEC88C99FF285F2FF279BC* L_0 = __this->___scrollRect_12;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____ViewsRect_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ViewsRect_26), (void*)L_1);
		// loopListMini.Init(OnInitDone, OnRefresh, OnRecycle);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_2 = __this->___loopListMini_4;
		Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E* L_3 = (Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E*)il2cpp_codegen_object_new(Action_1_t8C37E947818FADD5D0CBAB05145A5A04C9CCBA2E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m483E4F3EA935B55010C26C3BE13F6609581DAECF(L_3, __this, (intptr_t)((void*)ConsoleAll_OnInitDone_mE7B627DA4601894DF6FAF4324BB6CA9735683F77_RuntimeMethod_var), NULL);
		Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* L_4 = (Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485*)il2cpp_codegen_object_new(Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mDE35C22860B0720A0C19926A3788FC61FF8803CF(L_4, __this, (intptr_t)((void*)ConsoleAll_OnRefresh_m9EF60865530AB3585CCF5E8757A2C3ABA7858A35_RuntimeMethod_var), NULL);
		Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485* L_5 = (Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485*)il2cpp_codegen_object_new(Action_1_tCC75D5BFB7B7268989D0F404973516E430D28485_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mDE35C22860B0720A0C19926A3788FC61FF8803CF(L_5, __this, (intptr_t)((void*)ConsoleAll_OnRecycle_mCA02156C23F19104CEB2CBD6F21E4B588226F0F0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		LoopListMini_Init_m464669DCBE34AB7FBF1B62C16DF434B1C89C88DA(L_2, L_3, L_4, L_5, NULL);
		// btnDelete.onClick.AddListener(OnClickDelete);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___btnDelete_5;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)ConsoleAll_OnClickDelete_m06937C33BF00CC89CB715320D4943B4008EC63E1_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// iptSearch.onValueChanged.AddListener(OnInputSearch);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___iptSearch_6;
		NullCheck(L_9);
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_10;
		L_10 = InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE_inline(L_9, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_11 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_11, __this, (intptr_t)((void*)ConsoleAll_OnInputSearch_m1A9550698063837C3F1EB011E962B027928371B1_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_10, L_11, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// btnInfo.onClick.AddListener(OnClickInfo);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___btnInfo_7;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)ConsoleAll_OnClickInfo_mF5B2E867ED475995A9A488DC90CB7023F4E62B2D_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// togLog.onValueChanged.AddListener(OnTogLog);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_15 = __this->___togLog_8;
		NullCheck(L_15);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_16 = L_15->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_17 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_17, __this, (intptr_t)((void*)ConsoleAll_OnTogLog_mCBD2C75F5E6CFD7538EFF28344C1DB0A42F06D6D_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_16, L_17, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// togLog.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = __this->___togLog_8;
		NullCheck(L_18);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_18, (bool)1, NULL);
		// togWarring.onValueChanged.AddListener(OnTogWarring);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_19 = __this->___togWarring_9;
		NullCheck(L_19);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_20 = L_19->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_21 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_21, __this, (intptr_t)((void*)ConsoleAll_OnTogWarring_m696D27D774804098A9460DB11C3D63F6029ECE0D_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_20, L_21, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// togWarring.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_22 = __this->___togWarring_9;
		NullCheck(L_22);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_22, (bool)1, NULL);
		// togError.onValueChanged.AddListener(OnTogError);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_23 = __this->___togError_10;
		NullCheck(L_23);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_24 = L_23->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_25 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_25, __this, (intptr_t)((void*)ConsoleAll_OnTogError_mD20C22B54843D6F96EF85837E1D4EEB236A9CA00_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_24, L_25, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// togError.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_26 = __this->___togError_10;
		NullCheck(L_26);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_26, (bool)1, NULL);
		// btnClose.onClick.AddListener(OnClickClose);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = __this->___btnClose_11;
		NullCheck(L_27);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_28;
		L_28 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_27, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_29 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_29, __this, (intptr_t)((void*)ConsoleAll_OnClickClose_m6E72DC43347897AB2159E5E3280544B5004824FC_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_28, L_29, NULL);
		// btnSelect.onClick.AddListener(OnClickSelect);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = __this->___btnSelect_16;
		NullCheck(L_30);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_31;
		L_31 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_30, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_32 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_32, __this, (intptr_t)((void*)ConsoleAll_OnClickSelect_m4C265B36156E1EEF9C184542E4C854DEE0B3A58D_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_31, L_32, NULL);
		// if (loopListMini.isInit)
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_33 = __this->___loopListMini_4;
		NullCheck(L_33);
		bool L_34;
		L_34 = LoopListBase_get_isInit_mD96936A587FF74201C022BCC444FE5F25CC63FD5_inline(L_33, NULL);
		if (!L_34)
		{
			goto IL_0167;
		}
	}
	{
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_35 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_36 = __this->____AllShowLogCache_28;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_36, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_35);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_35, L_37, NULL);
	}

IL_0167:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnInitDone(System.Collections.Generic.List`1<LeeFramework.UILoopListMini.LoopItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnInitDone_mE7B627DA4601894DF6FAF4324BB6CA9735683F77 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m8FE437E28717C5FA5237BA1712D07256A992AE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m8732E83A9B6F0EBEBD9FA64F34A91E8970E42621_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m14A22F14AA7A7FBF24E43AA9C563D2F1E6610403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE5007B6869F5FFD3A1F7041331C1948ACD70A49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF6D07E83259517CC6CABD7910A05A14D969D6AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLogView_t57E51D62335A30080544D55DC598B824BBEBA5E0_m16C3E84D34E52F42C3463EEA7153778481C01B18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m660D32D7C38BB32B9DEA06FA540E77A85347157A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* V_1 = NULL;
	{
		// _AllLoopItem.Clear();
		Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* L_0 = __this->____AllLoopItem_29;
		NullCheck(L_0);
		Dictionary_2_Clear_m8FE437E28717C5FA5237BA1712D07256A992AE2F(L_0, Dictionary_2_Clear_m8FE437E28717C5FA5237BA1712D07256A992AE2F_RuntimeMethod_var);
		// foreach (LoopItem item in list)
		List_1_tC68D82DACCDD2E98E40A993E0BD0C67B22E0CCED* L_1 = ___0_list;
		NullCheck(L_1);
		Enumerator_tFB6A676E4FCDE3FF52749D319BC638B1B256ADBB L_2;
		L_2 = List_1_GetEnumerator_m660D32D7C38BB32B9DEA06FA540E77A85347157A(L_1, List_1_GetEnumerator_m660D32D7C38BB32B9DEA06FA540E77A85347157A_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m14A22F14AA7A7FBF24E43AA9C563D2F1E6610403((&V_0), Enumerator_Dispose_m14A22F14AA7A7FBF24E43AA9C563D2F1E6610403_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_0014_1:
			{
				// foreach (LoopItem item in list)
				LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* L_3;
				L_3 = Enumerator_get_Current_mF6D07E83259517CC6CABD7910A05A14D969D6AA1_inline((&V_0), Enumerator_get_Current_mF6D07E83259517CC6CABD7910A05A14D969D6AA1_RuntimeMethod_var);
				V_1 = L_3;
				// _AllLoopItem[item.instanceId] = item.gameObject.GetComponent<LogView>();
				Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* L_4 = __this->____AllLoopItem_29;
				LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* L_5 = V_1;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = LoopItem_get_instanceId_m5B2CF41D4C362288043326FD10ECE313CB27E184_inline(L_5, NULL);
				LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* L_7 = V_1;
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
				NullCheck(L_8);
				LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_9;
				L_9 = GameObject_GetComponent_TisLogView_t57E51D62335A30080544D55DC598B824BBEBA5E0_m16C3E84D34E52F42C3463EEA7153778481C01B18(L_8, GameObject_GetComponent_TisLogView_t57E51D62335A30080544D55DC598B824BBEBA5E0_m16C3E84D34E52F42C3463EEA7153778481C01B18_RuntimeMethod_var);
				NullCheck(L_4);
				Dictionary_2_set_Item_m8732E83A9B6F0EBEBD9FA64F34A91E8970E42621(L_4, L_6, L_9, Dictionary_2_set_Item_m8732E83A9B6F0EBEBD9FA64F34A91E8970E42621_RuntimeMethod_var);
			}

IL_0038_1:
			{
				// foreach (LoopItem item in list)
				bool L_10;
				L_10 = Enumerator_MoveNext_mCE5007B6869F5FFD3A1F7041331C1948ACD70A49((&V_0), Enumerator_MoveNext_mCE5007B6869F5FFD3A1F7041331C1948ACD70A49_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnRefresh(LeeFramework.UILoopListMini.LoopItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnRefresh_m9EF60865530AB3585CCF5E8757A2C3ABA7858A35 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m655AD9F9AD1A5D23EBCAC8252843A0D61405849C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC9D36C7410D11977BB504F92877AA397D78A5F7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4E2B24F9E7AC4464B142695B52F86821F0B0C583_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* V_0 = NULL;
	LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* V_1 = NULL;
	{
		// if (_AllLoopItem.ContainsKey(item.instanceId) && item.id <= _AllShowLogCache.Count - 1)
		Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* L_0 = __this->____AllLoopItem_29;
		LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* L_1 = ___0_item;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LoopItem_get_instanceId_m5B2CF41D4C362288043326FD10ECE313CB27E184_inline(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m655AD9F9AD1A5D23EBCAC8252843A0D61405849C(L_0, L_2, Dictionary_2_ContainsKey_m655AD9F9AD1A5D23EBCAC8252843A0D61405849C_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_00b5;
		}
	}
	{
		LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* L_4 = ___0_item;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = LoopItem_get_id_mC73238D92DBD33964BD287B7761C245C082DA313_inline(L_4, NULL);
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_6 = __this->____AllShowLogCache_28;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_6, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		if ((((int32_t)L_5) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_00b5;
		}
	}
	{
		// LogCache data = _AllShowLogCache[item.id];
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_8 = __this->____AllShowLogCache_28;
		LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* L_9 = ___0_item;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = LoopItem_get_id_mC73238D92DBD33964BD287B7761C245C082DA313_inline(L_9, NULL);
		NullCheck(L_8);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_11;
		L_11 = List_1_get_Item_m4E2B24F9E7AC4464B142695B52F86821F0B0C583(L_8, L_10, List_1_get_Item_m4E2B24F9E7AC4464B142695B52F86821F0B0C583_RuntimeMethod_var);
		V_0 = L_11;
		// LogView view = _AllLoopItem[item.instanceId];
		Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* L_12 = __this->____AllLoopItem_29;
		LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* L_13 = ___0_item;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = LoopItem_get_instanceId_m5B2CF41D4C362288043326FD10ECE313CB27E184_inline(L_13, NULL);
		NullCheck(L_12);
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_15;
		L_15 = Dictionary_2_get_Item_mC9D36C7410D11977BB504F92877AA397D78A5F7C(L_12, L_14, Dictionary_2_get_Item_mC9D36C7410D11977BB504F92877AA397D78A5F7C_RuntimeMethod_var);
		V_1 = L_15;
		// view.SetLog(data);
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_16 = V_1;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_17 = V_0;
		NullCheck(L_16);
		LogView_SetLog_m356B061E629C7F7CC357B537AA2411F69C97699B(L_16, L_17, NULL);
		// view.ShowFps(_IsFps);
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_18 = V_1;
		bool L_19 = __this->____IsFps_21;
		NullCheck(L_18);
		LogView_ShowFps_m4910FBFF7BECE937E47910BA8AD5067481D0C47E(L_18, L_19, NULL);
		// view.ShowMono(_IsMono);
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_20 = V_1;
		bool L_21 = __this->____IsMono_22;
		NullCheck(L_20);
		LogView_ShowMono_m0BE688F3F4AFAD7A669EAAA40B6CB9A3F24338AC(L_20, L_21, NULL);
		// if (data.isFull)
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_22 = V_0;
		NullCheck(L_22);
		bool L_23 = L_22->___isFull_6;
		if (!L_23)
		{
			goto IL_0081;
		}
	}
	{
		// view.SetFullBgColor();
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_24 = V_1;
		NullCheck(L_24);
		LogView_SetFullBgColor_m32FEAA4CA99DFCE4FF7DD418A0A18BC1A2DF8BFE(L_24, NULL);
		goto IL_008d;
	}

IL_0081:
	{
		// view.SetBgColor(item.id);
		LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* L_25 = V_1;
		LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* L_26 = ___0_item;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = LoopItem_get_id_mC73238D92DBD33964BD287B7761C245C082DA313_inline(L_26, NULL);
		NullCheck(L_25);
		LogView_SetBgColor_mF3D8308CBB21C1FF44E1B79A00C250668B8CF8D6(L_25, L_27, NULL);
	}

IL_008d:
	{
		// if (_SelectLogIndex != -1 && data.index == _SelectLogIndex)
		int32_t L_28 = __this->____SelectLogIndex_24;
		if ((((int32_t)L_28) == ((int32_t)(-1))))
		{
			goto IL_00b5;
		}
	}
	{
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->___index_0;
		int32_t L_31 = __this->____SelectLogIndex_24;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00b5;
		}
	}
	{
		// if (btnSelect.gameObject.activeSelf)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = __this->___btnSelect_16;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_33, NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnRecycle(LeeFramework.UILoopListMini.LoopItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnRecycle_mCA02156C23F19104CEB2CBD6F21E4B588226F0F0 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* ___0_item, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::AddShowLog(LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_AddShowLog_m2E7F8E5EDD5BA844830694A3526E5900EBBA404D (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_cache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IsSearch())
		bool L_0;
		L_0 = ConsoleAll_IsSearch_m8946F8D59FBEACB8A6A276E3BC5BCC0D3004B416(__this, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// if (!IsSearchLog(cache.log.condition))
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_1 = ___0_cache;
		NullCheck(L_1);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_2 = L_1->___log_1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___condition_0;
		bool L_4;
		L_4 = ConsoleAll_IsSearchLog_m4C32B0DC544A896DE6F0103726D27FE0618D3C8E(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// switch (cache.log.type)
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_5 = ___0_cache;
		NullCheck(L_5);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_6 = L_5->___log_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___type_2;
		V_0 = L_7;
		int32_t L_8 = V_0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_0058;
			}
			case 3:
			{
				goto IL_0043;
			}
			case 4:
			{
				goto IL_006d;
			}
		}
	}
	{
		return;
	}

IL_0043:
	{
		// if (_IsLog)
		bool L_9 = __this->____IsLog_17;
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		// _AllShowLogCache.Add(cache);
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_10 = __this->____AllShowLogCache_28;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_11 = ___0_cache;
		NullCheck(L_10);
		List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_10, L_11, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
		// break;
		return;
	}

IL_0058:
	{
		// if (_IsWarring)
		bool L_12 = __this->____IsWarring_18;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		// _AllShowLogCache.Add(cache);
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_13 = __this->____AllShowLogCache_28;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_14 = ___0_cache;
		NullCheck(L_13);
		List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_13, L_14, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
		// break;
		return;
	}

IL_006d:
	{
		// if (_IsError)
		bool L_15 = __this->____IsError_19;
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		// _AllShowLogCache.Add(cache);
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_16 = __this->____AllShowLogCache_28;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_17 = ___0_cache;
		NullCheck(L_16);
		List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_16, L_17, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnClickDelete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnClickDelete_m06937C33BF00CC89CB715320D4943B4008EC63E1 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _LogIndex = -1;
		__this->____LogIndex_23 = (-1);
		// _AllLogCache.Clear();
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_0 = __this->____AllLogCache_27;
		NullCheck(L_0);
		List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_inline(L_0, List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_RuntimeMethod_var);
		// _AllShowLogCache.Clear();
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_1 = __this->____AllShowLogCache_28;
		NullCheck(L_1);
		List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_inline(L_1, List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_RuntimeMethod_var);
		// RuntimeConsole.instance.logMgr.ClearLog();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_2 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* L_3;
		L_3 = RuntimeConsole_get_logMgr_m10418FE2135026A38116DE9887ACF5250254BE86_inline(L_2, NULL);
		NullCheck(L_3);
		LogMgr_ClearLog_m04448B7A8638EE3FAE47AEFB86219626FB7EB426(L_3, NULL);
		// RuntimeConsole.instance.consoleBottom.HideFullLog();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_4 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* L_5 = L_4->___consoleBottom_8;
		NullCheck(L_5);
		ConsoleBottom_HideFullLog_m2B185A0B990E28C03D2D275CFEE69FFB07073D62(L_5, NULL);
		// ResetView();
		ConsoleAll_ResetView_m1D869E8A881C31DA659BC738A37962F6C03106D8(__this, NULL);
		// loopListMini.UpdateData(-1);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_6 = __this->___loopListMini_4;
		NullCheck(L_6);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_6, (-1), NULL);
		// UpdateLogNum();
		ConsoleAll_UpdateLogNum_m8E483B2C3175F2C4502CB9CB17159DB0FC6F9BAC(__this, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnInputSearch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnInputSearch_m1A9550698063837C3F1EB011E962B027928371B1 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, String_t* ___0_txt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.IsNullOrEmpty(txt))
		String_t* L_0 = ___0_txt;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// _SearchStr = txt;
		String_t* L_2 = ___0_txt;
		__this->____SearchStr_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____SearchStr_20), (void*)L_2);
		// SelectSearchLog(txt);
		String_t* L_3 = ___0_txt;
		ConsoleAll_SelectSearchLog_m6584BE39D11CF8B1353AE122D130A6793F875827(__this, L_3, NULL);
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_4 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_5 = __this->____AllShowLogCache_28;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_5, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_4);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_4, L_6, NULL);
		return;
	}

IL_002d:
	{
		// _SearchStr = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____SearchStr_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____SearchStr_20), (void*)L_7);
		// OnTogLog(_IsLog);
		bool L_8 = __this->____IsLog_17;
		ConsoleAll_OnTogLog_mCBD2C75F5E6CFD7538EFF28344C1DB0A42F06D6D(__this, L_8, NULL);
		// OnTogWarring(_IsWarring);
		bool L_9 = __this->____IsWarring_18;
		ConsoleAll_OnTogWarring_m696D27D774804098A9460DB11C3D63F6029ECE0D(__this, L_9, NULL);
		// OnTogError(_IsError);
		bool L_10 = __this->____IsError_19;
		ConsoleAll_OnTogError_mD20C22B54843D6F96EF85837E1D4EEB236A9CA00(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnClickInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnClickInfo_mF5B2E867ED475995A9A488DC90CB7023F4E62B2D (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RuntimeConsole.instance.consoleInfo.SetActive(true);
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_0 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* L_1 = L_0->___consoleInfo_7;
		NullCheck(L_1);
		ConsoleInfo_SetActive_mE0A3B759ECC41065B55213A04CACD88F54C815B9(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnTogLog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnTogLog_mCBD2C75F5E6CFD7538EFF28344C1DB0A42F06D6D (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// _IsLog = value;
		bool L_0 = ___0_value;
		__this->____IsLog_17 = L_0;
		// SelectAllCacheLog();
		ConsoleAll_SelectAllCacheLog_m52068E0685C46DB8644C08ED6E27B7A5A32D9406(__this, NULL);
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_1 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_2 = __this->____AllShowLogCache_28;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_2, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_1);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_1, L_3, NULL);
		// txtLogNum.color = value ? _ColTxtWhite : _ColTxtGray;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___txtLogNum_13;
		bool L_5 = ___0_value;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0034;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->____ColTxtGray_31;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0034:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->____ColTxtWhite_30;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnTogWarring(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnTogWarring_m696D27D774804098A9460DB11C3D63F6029ECE0D (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// _IsWarring = value;
		bool L_0 = ___0_value;
		__this->____IsWarring_18 = L_0;
		// SelectAllCacheLog();
		ConsoleAll_SelectAllCacheLog_m52068E0685C46DB8644C08ED6E27B7A5A32D9406(__this, NULL);
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_1 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_2 = __this->____AllShowLogCache_28;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_2, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_1);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_1, L_3, NULL);
		// txtWarringNum.color = value ? _ColTxtWhite : _ColTxtGray;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___txtWarringNum_14;
		bool L_5 = ___0_value;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0034;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->____ColTxtGray_31;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0034:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->____ColTxtWhite_30;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnTogError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnTogError_mD20C22B54843D6F96EF85837E1D4EEB236A9CA00 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// _IsError = value;
		bool L_0 = ___0_value;
		__this->____IsError_19 = L_0;
		// SelectAllCacheLog();
		ConsoleAll_SelectAllCacheLog_m52068E0685C46DB8644C08ED6E27B7A5A32D9406(__this, NULL);
		// loopListMini.UpdateData(_AllShowLogCache.Count);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_1 = __this->___loopListMini_4;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_2 = __this->____AllShowLogCache_28;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_2, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		NullCheck(L_1);
		LoopListMini_UpdateData_m32EBBF22627F0669AEC0841D7A513406EDE2EE3C(L_1, L_3, NULL);
		// txtErrorNum.color = value ? _ColTxtWhite : _ColTxtGray;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___txtErrorNum_15;
		bool L_5 = ___0_value;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0034;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->____ColTxtGray_31;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0034:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->____ColTxtWhite_30;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnClickClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnClickClose_m6E72DC43347897AB2159E5E3280544B5004824FC (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RuntimeConsole.instance.HideConsoleAll();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_0 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		RuntimeConsole_HideConsoleAll_m1847D24C142E2E79B66DC10D9E8F9CFC62532D33(L_0, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::OnClickSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_OnClickSelect_m4C265B36156E1EEF9C184542E4C854DEE0B3A58D (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (_SelectLogIndex == -1)
		int32_t L_0 = __this->____SelectLogIndex_24;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// float progress = _SelectLogIndex * 1.0f / _AllShowLogCache.Count;
		int32_t L_1 = __this->____SelectLogIndex_24;
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_2 = __this->____AllShowLogCache_28;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_inline(L_2, List_1_get_Count_mC66317C7F787B193C6E567341D731117DDBAACFA_RuntimeMethod_var);
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)L_1), (1.0f)))/((float)L_3)));
		// loopListMini.ScrollToTarget(1 - progress, _ScrollTime);
		LoopListMini_t90AB480CA4C5730559763C1A12AB2E9781CF3271* L_4 = __this->___loopListMini_4;
		float L_5 = V_0;
		NullCheck(L_4);
		LoopListMini_ScrollToTarget_m764C532184253B47841754086D2693B112B8D583(L_4, ((float)il2cpp_codegen_subtract((1.0f), L_5)), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::SelectAllCacheLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_SelectAllCacheLog_m52068E0685C46DB8644C08ED6E27B7A5A32D9406 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mD6FC9ECB0D6F8BB2A20C6FA80511E614CD8F0309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSelectAllCacheLogU3Eb__49_0_mBF2E57ABBF99776B64485BA52596F9F708015199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B V_0;
	memset((&V_0), 0, sizeof(V_0));
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* V_1 = NULL;
	int32_t V_2 = 0;
	Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* G_B18_0 = NULL;
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* G_B18_1 = NULL;
	Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* G_B17_0 = NULL;
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* G_B17_1 = NULL;
	{
		// _AllShowLogCache.Clear();
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_0 = __this->____AllShowLogCache_28;
		NullCheck(L_0);
		List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_inline(L_0, List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_RuntimeMethod_var);
		// foreach (LogCache cache in _AllLogCache)
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_1 = __this->____AllLogCache_27;
		NullCheck(L_1);
		Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B L_2;
		L_2 = List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B(L_1, List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06((&V_0), Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ad_1;
			}

IL_001c_1:
			{
				// foreach (LogCache cache in _AllLogCache)
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_3;
				L_3 = Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_inline((&V_0), Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_RuntimeMethod_var);
				V_1 = L_3;
				// if (cache == null)
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_4 = V_1;
				if (!L_4)
				{
					goto IL_00ad_1;
				}
			}
			{
				// if (IsSearch())
				bool L_5;
				L_5 = ConsoleAll_IsSearch_m8946F8D59FBEACB8A6A276E3BC5BCC0D3004B416(__this, NULL);
				if (!L_5)
				{
					goto IL_0045_1;
				}
			}
			{
				// if (!IsSearchLog(cache.log.condition))
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_6 = V_1;
				NullCheck(L_6);
				Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_7 = L_6->___log_1;
				NullCheck(L_7);
				String_t* L_8 = L_7->___condition_0;
				bool L_9;
				L_9 = ConsoleAll_IsSearchLog_m4C32B0DC544A896DE6F0103726D27FE0618D3C8E(__this, L_8, NULL);
				if (!L_9)
				{
					goto IL_00ad_1;
				}
			}

IL_0045_1:
			{
				// switch (cache.log.type)
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_10 = V_1;
				NullCheck(L_10);
				Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_11 = L_10->___log_1;
				NullCheck(L_11);
				int32_t L_12 = L_11->___type_2;
				V_2 = L_12;
				int32_t L_13 = V_2;
				switch (L_13)
				{
					case 0:
					{
						goto IL_0099_1;
					}
					case 1:
					{
						goto IL_0099_1;
					}
					case 2:
					{
						goto IL_0083_1;
					}
					case 3:
					{
						goto IL_006d_1;
					}
					case 4:
					{
						goto IL_0099_1;
					}
				}
			}
			{
				goto IL_00ad_1;
			}

IL_006d_1:
			{
				// if (_IsLog)
				bool L_14 = __this->____IsLog_17;
				if (!L_14)
				{
					goto IL_00ad_1;
				}
			}
			{
				// _AllShowLogCache.Add(cache);
				List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_15 = __this->____AllShowLogCache_28;
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_16 = V_1;
				NullCheck(L_15);
				List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_15, L_16, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
				// break;
				goto IL_00ad_1;
			}

IL_0083_1:
			{
				// if (_IsWarring)
				bool L_17 = __this->____IsWarring_18;
				if (!L_17)
				{
					goto IL_00ad_1;
				}
			}
			{
				// _AllShowLogCache.Add(cache);
				List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_18 = __this->____AllShowLogCache_28;
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_19 = V_1;
				NullCheck(L_18);
				List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_18, L_19, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
				// break;
				goto IL_00ad_1;
			}

IL_0099_1:
			{
				// if (_IsError)
				bool L_20 = __this->____IsError_19;
				if (!L_20)
				{
					goto IL_00ad_1;
				}
			}
			{
				// _AllShowLogCache.Add(cache);
				List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_21 = __this->____AllShowLogCache_28;
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_22 = V_1;
				NullCheck(L_21);
				List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_21, L_22, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
			}

IL_00ad_1:
			{
				// foreach (LogCache cache in _AllLogCache)
				bool L_23;
				L_23 = Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB((&V_0), Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_00c9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		// _AllShowLogCache.Sort((item1, item2) =>
		// {
		//     if (item1.log.index < item2.log.index)
		//     {
		//         return -1;
		//     }
		//     else
		//     {
		//         return 1;
		//     }
		// });
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_24 = __this->____AllShowLogCache_28;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* L_25 = ((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__49_0_2;
		Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* L_26 = L_25;
		G_B17_0 = L_26;
		G_B17_1 = L_24;
		if (L_26)
		{
			G_B18_0 = L_26;
			G_B18_1 = L_24;
			goto IL_00ee;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* L_27 = ((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* L_28 = (Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118*)il2cpp_codegen_object_new(Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Comparison_1__ctor_mCBA6AFEA3EDEDF281622F9DD87062442AF794DDD(L_28, L_27, (intptr_t)((void*)U3CU3Ec_U3CSelectAllCacheLogU3Eb__49_0_mBF2E57ABBF99776B64485BA52596F9F708015199_RuntimeMethod_var), NULL);
		Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* L_29 = L_28;
		((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__49_0_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__49_0_2), (void*)L_29);
		G_B18_0 = L_29;
		G_B18_1 = G_B17_1;
	}

IL_00ee:
	{
		NullCheck(G_B18_1);
		List_1_Sort_mD6FC9ECB0D6F8BB2A20C6FA80511E614CD8F0309(G_B18_1, G_B18_0, List_1_Sort_mD6FC9ECB0D6F8BB2A20C6FA80511E614CD8F0309_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::SelectSearchLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_SelectSearchLog_m6584BE39D11CF8B1353AE122D130A6793F875827 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, String_t* ___0_txt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mD6FC9ECB0D6F8BB2A20C6FA80511E614CD8F0309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSelectSearchLogU3Eb__50_0_m34AE8DA175BBDFEC7FD23D7B724EBFC491973430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B V_0;
	memset((&V_0), 0, sizeof(V_0));
	LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* V_1 = NULL;
	int32_t V_2 = 0;
	Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* G_B17_0 = NULL;
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* G_B17_1 = NULL;
	Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* G_B16_0 = NULL;
	List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* G_B16_1 = NULL;
	{
		// _AllShowLogCache.Clear();
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_0 = __this->____AllShowLogCache_28;
		NullCheck(L_0);
		List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_inline(L_0, List_1_Clear_mE910A81A2B68292172B443134E01175660AC0357_RuntimeMethod_var);
		// foreach (LogCache cache in _AllLogCache)
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_1 = __this->____AllLogCache_27;
		NullCheck(L_1);
		Enumerator_t0098AE99663DAA787F600B90CD16E24ACB64B70B L_2;
		L_2 = List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B(L_1, List_1_GetEnumerator_mC07678ACE9A55AE995D9377C3EF092A99798D06B_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06((&V_0), Enumerator_Dispose_mC256EB5547B3F465CB9C29F0D37E3B2E40C2AC06_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a2_1;
			}

IL_001c_1:
			{
				// foreach (LogCache cache in _AllLogCache)
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_3;
				L_3 = Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_inline((&V_0), Enumerator_get_Current_m1F650858E7E4DB8EE14D0FBDEFE54CC35A7ACF97_RuntimeMethod_var);
				V_1 = L_3;
				// if (cache == null)
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_4 = V_1;
				if (!L_4)
				{
					goto IL_00a2_1;
				}
			}
			{
				// if (IsSearchLog(cache.log.condition))
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_5 = V_1;
				NullCheck(L_5);
				Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_6 = L_5->___log_1;
				NullCheck(L_6);
				String_t* L_7 = L_6->___condition_0;
				bool L_8;
				L_8 = ConsoleAll_IsSearchLog_m4C32B0DC544A896DE6F0103726D27FE0618D3C8E(__this, L_7, NULL);
				if (!L_8)
				{
					goto IL_00a2_1;
				}
			}
			{
				// switch (cache.log.type)
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_9 = V_1;
				NullCheck(L_9);
				Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_10 = L_9->___log_1;
				NullCheck(L_10);
				int32_t L_11 = L_10->___type_2;
				V_2 = L_11;
				int32_t L_12 = V_2;
				switch (L_12)
				{
					case 0:
					{
						goto IL_008e_1;
					}
					case 1:
					{
						goto IL_008e_1;
					}
					case 2:
					{
						goto IL_0078_1;
					}
					case 3:
					{
						goto IL_0062_1;
					}
					case 4:
					{
						goto IL_008e_1;
					}
				}
			}
			{
				goto IL_00a2_1;
			}

IL_0062_1:
			{
				// if (_IsLog)
				bool L_13 = __this->____IsLog_17;
				if (!L_13)
				{
					goto IL_00a2_1;
				}
			}
			{
				// _AllShowLogCache.Add(cache);
				List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_14 = __this->____AllShowLogCache_28;
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_15 = V_1;
				NullCheck(L_14);
				List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_14, L_15, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
				// break;
				goto IL_00a2_1;
			}

IL_0078_1:
			{
				// if (_IsWarring)
				bool L_16 = __this->____IsWarring_18;
				if (!L_16)
				{
					goto IL_00a2_1;
				}
			}
			{
				// _AllShowLogCache.Add(cache);
				List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_17 = __this->____AllShowLogCache_28;
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_18 = V_1;
				NullCheck(L_17);
				List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_17, L_18, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
				// break;
				goto IL_00a2_1;
			}

IL_008e_1:
			{
				// if (_IsError)
				bool L_19 = __this->____IsError_19;
				if (!L_19)
				{
					goto IL_00a2_1;
				}
			}
			{
				// _AllShowLogCache.Add(cache);
				List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_20 = __this->____AllShowLogCache_28;
				LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_21 = V_1;
				NullCheck(L_20);
				List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_inline(L_20, L_21, List_1_Add_m3C0208542D8BEA3D36AB65F562F92F64491C46E5_RuntimeMethod_var);
			}

IL_00a2_1:
			{
				// foreach (LogCache cache in _AllLogCache)
				bool L_22;
				L_22 = Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB((&V_0), Enumerator_MoveNext_mE2EE31862768367D7DFBB973970083EFCE8CF2FB_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_00be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// _AllShowLogCache.Sort((item1, item2) =>
		// {
		//     if (item1.log.index < item2.log.index)
		//     {
		//         return -1;
		//     }
		//     else
		//     {
		//         return 1;
		//     }
		// });
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_23 = __this->____AllShowLogCache_28;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* L_24 = ((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_3;
		Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* L_25 = L_24;
		G_B16_0 = L_25;
		G_B16_1 = L_23;
		if (L_25)
		{
			G_B17_0 = L_25;
			G_B17_1 = L_23;
			goto IL_00e3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* L_26 = ((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* L_27 = (Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118*)il2cpp_codegen_object_new(Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Comparison_1__ctor_mCBA6AFEA3EDEDF281622F9DD87062442AF794DDD(L_27, L_26, (intptr_t)((void*)U3CU3Ec_U3CSelectSearchLogU3Eb__50_0_m34AE8DA175BBDFEC7FD23D7B724EBFC491973430_RuntimeMethod_var), NULL);
		Comparison_1_t1F6DE2FF5C4F5BFFF5A2A7A54415FCF91D315118* L_28 = L_27;
		((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_3), (void*)L_28);
		G_B17_0 = L_28;
		G_B17_1 = G_B16_1;
	}

IL_00e3:
	{
		NullCheck(G_B17_1);
		List_1_Sort_mD6FC9ECB0D6F8BB2A20C6FA80511E614CD8F0309(G_B17_1, G_B17_0, List_1_Sort_mD6FC9ECB0D6F8BB2A20C6FA80511E614CD8F0309_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean LeeFramework.Console.ConsoleAll::IsSearch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsoleAll_IsSearch_m8946F8D59FBEACB8A6A276E3BC5BCC0D3004B416 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	{
		// return !string.IsNullOrEmpty(_SearchStr);
		String_t* L_0 = __this->____SearchStr_20;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean LeeFramework.Console.ConsoleAll::IsSearchLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsoleAll_IsSearchLog_m4C32B0DC544A896DE6F0103726D27FE0618D3C8E (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, String_t* ___0_condition, const RuntimeMethod* method) 
{
	{
		// if (IsSearch() && condition.ToLower().Contains(_SearchStr.ToLower()))
		bool L_0;
		L_0 = ConsoleAll_IsSearch_m8946F8D59FBEACB8A6A276E3BC5BCC0D3004B416(__this, NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___0_condition;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		String_t* L_3 = __this->____SearchStr_20;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::UpdateLogNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll_UpdateLogNum_m8E483B2C3175F2C4502CB9CB17159DB0FC6F9BAC (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// txtLogNum.text = RuntimeConsole.instance.logMgr.allLog.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtLogNum_13;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_1 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* L_2;
		L_2 = RuntimeConsole_get_logMgr_m10418FE2135026A38116DE9887ACF5250254BE86_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LogMgr_get_allLog_m56E48103A68EC6632439434C984BFCF3681BFA9D_inline(L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// txtWarringNum.text = RuntimeConsole.instance.logMgr.allWarring.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___txtWarringNum_14;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_6 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* L_7;
		L_7 = RuntimeConsole_get_logMgr_m10418FE2135026A38116DE9887ACF5250254BE86_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = LogMgr_get_allWarring_mEE74908BF35D3590CA587C6919C05CCA43C76671_inline(L_7, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// txtErrorNum.text = RuntimeConsole.instance.logMgr.allError.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___txtErrorNum_15;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_11 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_11);
		LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* L_12;
		L_12 = RuntimeConsole_get_logMgr_m10418FE2135026A38116DE9887ACF5250254BE86_inline(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LogMgr_get_allError_m88B26A4F922A2007CBF4744E915ED5E81246426C_inline(L_12, NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_14);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleAll__ctor_m9F0E5FE4A359A1D96022649B59469F562ED511A7 (ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB36BFDCD66BA28F89B44D530EBD1484E8D67FEAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF48F844452E8A0793C406D64CCEEDBC9AA0C10E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _IsLog = true;
		__this->____IsLog_17 = (bool)1;
		// private bool _IsWarring = true;
		__this->____IsWarring_18 = (bool)1;
		// private bool _IsError = true;
		__this->____IsError_19 = (bool)1;
		// private string _SearchStr = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____SearchStr_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____SearchStr_20), (void*)L_0);
		// private int _LogIndex = -1;
		__this->____LogIndex_23 = (-1);
		// private int _SelectLogIndex = -1;
		__this->____SelectLogIndex_24 = (-1);
		// private List<LogCache> _AllLogCache = new List<LogCache>();
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_1 = (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*)il2cpp_codegen_object_new(List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF48F844452E8A0793C406D64CCEEDBC9AA0C10E4(L_1, List_1__ctor_mF48F844452E8A0793C406D64CCEEDBC9AA0C10E4_RuntimeMethod_var);
		__this->____AllLogCache_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____AllLogCache_27), (void*)L_1);
		// private List<LogCache> _AllShowLogCache = new List<LogCache>();
		List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2* L_2 = (List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2*)il2cpp_codegen_object_new(List_1_t4D9920E92E479832D2D84E06D5FD06A3629660B2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF48F844452E8A0793C406D64CCEEDBC9AA0C10E4(L_2, List_1__ctor_mF48F844452E8A0793C406D64CCEEDBC9AA0C10E4_RuntimeMethod_var);
		__this->____AllShowLogCache_28 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____AllShowLogCache_28), (void*)L_2);
		// private Dictionary<int, LogView> _AllLoopItem = new Dictionary<int, LogView>();
		Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C* L_3 = (Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C*)il2cpp_codegen_object_new(Dictionary_2_t22A94A716C6579EA57B27497923B0AC79C5EE67C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mB36BFDCD66BA28F89B44D530EBD1484E8D67FEAC(L_3, Dictionary_2__ctor_mB36BFDCD66BA28F89B44D530EBD1484E8D67FEAC_RuntimeMethod_var);
		__this->____AllLoopItem_29 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____AllLoopItem_29), (void*)L_3);
		// private Color _ColTxtWhite = new Color(1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_4), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->____ColTxtWhite_30 = L_4;
		// private Color _ColTxtGray = new Color(125 / 255f, 125 / 255f, 125 / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_5), (0.490196079f), (0.490196079f), (0.490196079f), /*hidden argument*/NULL);
		__this->____ColTxtGray_31 = L_5;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeeFramework.Console.ConsoleAll/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m6E6BCD22DF1DA21423F1C2D751CC24B629622F23 (U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean LeeFramework.Console.ConsoleAll/<>c__DisplayClass32_0::<ShowFullLog>b__0(LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass32_0_U3CShowFullLogU3Eb__0_m5AFC5C14066C0B99EDA4B4115FFA88167BA6B317 (U3CU3Ec__DisplayClass32_0_t6DA09887908497A3C6777E81A64CA36C565ADD36* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_x, const RuntimeMethod* method) 
{
	{
		// LogCache log = _AllLogCache.Find(x => x.index == index);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = L_0->___index_0;
		int32_t L_2 = __this->___index_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void LeeFramework.Console.ConsoleAll/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m00FDCA598B74594A5C463D5699190065251D70E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* L_0 = (U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003*)il2cpp_codegen_object_new(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m376503AC91AB4F1348936F45EEB1E746103F8E85(L_0, NULL);
		((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleAll/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m376503AC91AB4F1348936F45EEB1E746103F8E85 (U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean LeeFramework.Console.ConsoleAll/<>c::<ResetAllLogViewBg>b__35_0(LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResetAllLogViewBgU3Eb__35_0_m36C228DBE2C674BB3EB5F9EE6DC6CA922221536C (U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_x, const RuntimeMethod* method) 
{
	{
		// LogCache log = _AllLogCache.Find(x => x.isFull);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = ___0_x;
		NullCheck(L_0);
		bool L_1 = L_0->___isFull_6;
		return L_1;
	}
}
// System.Int32 LeeFramework.Console.ConsoleAll/<>c::<SelectAllCacheLog>b__49_0(LeeFramework.Console.LogCache,LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSelectAllCacheLogU3Eb__49_0_mBF2E57ABBF99776B64485BA52596F9F708015199 (U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_item1, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___1_item2, const RuntimeMethod* method) 
{
	{
		// if (item1.log.index < item2.log.index)
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = ___0_item1;
		NullCheck(L_0);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_1 = L_0->___log_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->___index_3;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_3 = ___1_item2;
		NullCheck(L_3);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_4 = L_3->___log_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___index_3;
		if ((((int32_t)L_2) >= ((int32_t)L_5)))
		{
			goto IL_001a;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_001a:
	{
		// return 1;
		return 1;
	}
}
// System.Int32 LeeFramework.Console.ConsoleAll/<>c::<SelectSearchLog>b__50_0(LeeFramework.Console.LogCache,LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSelectSearchLogU3Eb__50_0_m34AE8DA175BBDFEC7FD23D7B724EBFC491973430 (U3CU3Ec_t602A7ACF01A2B97DB7118EA99E79C2537C226003* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_item1, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___1_item2, const RuntimeMethod* method) 
{
	{
		// if (item1.log.index < item2.log.index)
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = ___0_item1;
		NullCheck(L_0);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_1 = L_0->___log_1;
		NullCheck(L_1);
		int32_t L_2 = L_1->___index_3;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_3 = ___1_item2;
		NullCheck(L_3);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_4 = L_3->___log_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___index_3;
		if ((((int32_t)L_2) >= ((int32_t)L_5)))
		{
			goto IL_001a;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_001a:
	{
		// return 1;
		return 1;
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
// System.Void LeeFramework.Console.ConsoleInfo::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_SetActive_mE0A3B759ECC41065B55213A04CACD88F54C815B9 (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// if (value)
		bool L_2 = ___0_value;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// RefreshInfo();
		ConsoleInfo_RefreshInfo_m786482F0A86D31702F9861EA3FEEB88EA99D7419(__this, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleInfo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_Start_mCD5BB056C1FD4DE5967DA8A3361C206598F29CA0 (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleInfo_OnClickClose_m531BE71AFBA32424FF3B9D2304E922FB908E4B11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleInfo_OnSldFontSize_mCB308A09B811B59A6AC73951EB66BD9C46639FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsoleInfo_RefreshInfo_m786482F0A86D31702F9861EA3FEEB88EA99D7419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtApp.fontSize = 12;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtApp_7;
		NullCheck(L_0);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_0, ((int32_t)12), NULL);
		// txtSys.fontSize = 12;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___txtSys_9;
		NullCheck(L_1);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_1, ((int32_t)12), NULL);
		// sldSize.minValue = 6;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___sldSize_10;
		NullCheck(L_2);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_2, (6.0f), NULL);
		// sldSize.maxValue = 24;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___sldSize_10;
		NullCheck(L_3);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_3, (24.0f), NULL);
		// sldSize.value = 12;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___sldSize_10;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, (12.0f));
		// btnClose.onClick.AddListener(OnClickClose);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___btnClose_4;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)ConsoleInfo_OnClickClose_m531BE71AFBA32424FF3B9D2304E922FB908E4B11_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// btnFresh.onClick.AddListener(RefreshInfo);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___btnFresh_5;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_8, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)ConsoleInfo_RefreshInfo_m786482F0A86D31702F9861EA3FEEB88EA99D7419_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_9, L_10, NULL);
		// sldSize.onValueChanged.AddListener(OnSldFontSize);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___sldSize_10;
		NullCheck(L_11);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_12;
		L_12 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_11, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_13 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_13, __this, (intptr_t)((void*)ConsoleInfo_OnSldFontSize_mCB308A09B811B59A6AC73951EB66BD9C46639FDA_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_12, L_13, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// RefreshInfo();
		ConsoleInfo_RefreshInfo_m786482F0A86D31702F9861EA3FEEB88EA99D7419(__this, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleInfo::RefreshInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_RefreshInfo_m786482F0A86D31702F9861EA3FEEB88EA99D7419 (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) 
{
	{
		// RefreshApp();
		ConsoleInfo_RefreshApp_mEA127BE2D8BF0163570F479E2115F1AF646CB1BF(__this, NULL);
		// RefreshSys();
		ConsoleInfo_RefreshSys_mBCC17AB563FB93BDEEAADD3B613C784C8EA7A040(__this, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleInfo::RefreshApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_RefreshApp_mEA127BE2D8BF0163570F479E2115F1AF646CB1BF (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7B06C5A9908A37B4FD2FDA3F5D1B2D6A9361D1D);
		s_Il2CppMethodInitialized = true;
	}
	Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t* V_3 = NULL;
	{
		// txtApp.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtApp_7;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// Application app = new Application();
		Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21* L_2 = (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21*)il2cpp_codegen_object_new(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Application__ctor_m7C98E7EEDC5A2B6E546168079C32F81499D090AF(L_2, NULL);
		V_0 = L_2;
		// Type type = typeof(Application);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		// PropertyInfo[] pros = type.GetProperties();
		NullCheck(L_4);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_5;
		L_5 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_4, NULL);
		// foreach (PropertyInfo item in pros)
		V_1 = L_5;
		V_2 = 0;
		goto IL_005f;
	}

IL_002a:
	{
		// foreach (PropertyInfo item in pros)
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// txtApp.text += string.Format("{0} : <color='#00A4FF'>{1}</color>\n", item.Name, item.GetValue(app));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___txtApp_7;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = L_10;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_11);
		PropertyInfo_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		PropertyInfo_t* L_15 = V_3;
		Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21* L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088(L_15, L_16, NULL);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD7B06C5A9908A37B4FD2FDA3F5D1B2D6A9361D1D, L_14, L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, L_18, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005f:
	{
		// foreach (PropertyInfo item in pros)
		int32_t L_21 = V_2;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleInfo::RefreshSys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_RefreshSys_mBCC17AB563FB93BDEEAADD3B613C784C8EA7A040 (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7B06C5A9908A37B4FD2FDA3F5D1B2D6A9361D1D);
		s_Il2CppMethodInitialized = true;
	}
	SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t* V_3 = NULL;
	{
		// txtSys.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtSys_9;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// SystemInfo app = new SystemInfo();
		SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4* L_2 = (SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4*)il2cpp_codegen_object_new(SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemInfo__ctor_m5DA71D3F1255A8AA68D9280DD79762048E3464A9(L_2, NULL);
		V_0 = L_2;
		// Type type = typeof(SystemInfo);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		// PropertyInfo[] pros = type.GetProperties();
		NullCheck(L_4);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_5;
		L_5 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_4, NULL);
		// foreach (PropertyInfo item in pros)
		V_1 = L_5;
		V_2 = 0;
		goto IL_005f;
	}

IL_002a:
	{
		// foreach (PropertyInfo item in pros)
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// txtSys.text += string.Format("{0} : <color='#00A4FF'>{1}</color>\n", item.Name, item.GetValue(app));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___txtSys_9;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = L_10;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_11);
		PropertyInfo_t* L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		PropertyInfo_t* L_15 = V_3;
		SystemInfo_t7030C23EFD82ED40B819842D95077874903D51F4* L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088(L_15, L_16, NULL);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD7B06C5A9908A37B4FD2FDA3F5D1B2D6A9361D1D, L_14, L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, L_18, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005f:
	{
		// foreach (PropertyInfo item in pros)
		int32_t L_21 = V_2;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleInfo::OnSldFontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_OnSldFontSize_mCB308A09B811B59A6AC73951EB66BD9C46639FDA (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// txtAppDes.fontSize = (int)value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtAppDes_6;
		float L_1 = ___0_value;
		NullCheck(L_0);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), NULL);
		// txtSysDes.fontSize = (int)value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___txtSysDes_8;
		float L_3 = ___0_value;
		NullCheck(L_2);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_2, il2cpp_codegen_cast_double_to_int<int32_t>(L_3), NULL);
		// txtApp.fontSize = (int)value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___txtApp_7;
		float L_5 = ___0_value;
		NullCheck(L_4);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_4, il2cpp_codegen_cast_double_to_int<int32_t>(L_5), NULL);
		// txtSys.fontSize = (int)value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___txtSys_9;
		float L_7 = ___0_value;
		NullCheck(L_6);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_6, il2cpp_codegen_cast_double_to_int<int32_t>(L_7), NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleInfo::OnClickClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo_OnClickClose_m531BE71AFBA32424FF3B9D2304E922FB908E4B11 (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtApp.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtApp_7;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// txtSys.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___txtSys_9;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleInfo__ctor_mC821327A2A71EFBD6F75E2A3B2DE040891D397AA (ConsoleInfo_tD7311413A8BE20D021E6EBF3A953732F45B6E55C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeeFramework.Console.ConsoleMini::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_Start_m1B31180895BF0D59F5EFA30DDA6E7594C37F1C52 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF440820E32896DBB9545A1A864B463C6D93ECFF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _CanvasRect = canvas.GetComponent<RectTransform>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_4;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____CanvasRect_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____CanvasRect_22), (void*)L_1);
		// _CanvasGroup = GetComponent<CanvasGroup>();
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2;
		L_2 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->____CanvasGroup_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____CanvasGroup_17), (void*)L_2);
		// _Rect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->____Rect_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Rect_24), (void*)L_3);
		// _HalfSize = _Rect.sizeDelta * 0.5f;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->____Rect_24;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_5, (0.5f), NULL);
		__this->____HalfSize_21 = L_6;
		// _CanvasSize = _CanvasRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->____CanvasRect_22;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		__this->____CanvasSize_23 = L_8;
		// txtVersion.text = string.Format("Ver: {0}", Application.version);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___txtVersion_8;
		String_t* L_10;
		L_10 = Application_get_version_m9CC0E94F12493682C1A2CA803083F6F01BA43124(NULL);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF440820E32896DBB9545A1A864B463C6D93ECFF4, L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// MoveToPos();
		ConsoleMini_MoveToPos_m4D98D62EBA79DEA54A26D57D94852B9733A9E2B4(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_SetActive_mDD786354E1B289BF5F0C24DAF9502357A7A6F10D (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// if (value)
		bool L_2 = ___0_value;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// imgLogBg.color = colNormal;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___imgLogBg_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___colNormal_13;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::AddLog(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_AddLog_mA8E738DF59DBE62CA32714B398D6EAB2784B4013 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, int32_t ___0_logType, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_logType;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0048;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_001c;
			}
			case 4:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_001c:
	{
		// _Log++;
		int32_t L_1 = __this->____Log_18;
		__this->____Log_18 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// UpdateLog();
		ConsoleMini_UpdateLog_m7FA5D01693BEB34565FFAE26DE0FAA5CF33ADB6D(__this, NULL);
		// break;
		goto IL_005c;
	}

IL_0032:
	{
		// _Warring++;
		int32_t L_2 = __this->____Warring_19;
		__this->____Warring_19 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// UpdateWarring();
		ConsoleMini_UpdateWarring_m7181A0F3A1E40755D6E4A85F1FAF62227117EDE5(__this, NULL);
		// break;
		goto IL_005c;
	}

IL_0048:
	{
		// _Error++;
		int32_t L_3 = __this->____Error_20;
		__this->____Error_20 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// UpdateError();
		ConsoleMini_UpdateError_mF08E17EA0C582D4173FE3F60A3BD0F2680598B4C(__this, NULL);
	}

IL_005c:
	{
		// if (_Error > 0)
		int32_t L_4 = __this->____Error_20;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		// imgLogBg.color = colError;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___imgLogBg_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___colError_16;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		return;
	}

IL_0077:
	{
		// else if (_Warring > 0)
		int32_t L_7 = __this->____Warring_19;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		// imgLogBg.color = colWarring;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___imgLogBg_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___colWarring_15;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		return;
	}

IL_0092:
	{
		// imgLogBg.color = colLog;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___imgLogBg_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___colLog_14;
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::SetFsp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_SetFsp_mC78EDFD5D0DB6D9DC83F53CD3FFE333582E1DD73 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, int32_t ___0_fps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA6E3FDAA3ECD3DF758EA8294AF4691F048EBCE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtFps.text = string.Format("FPS: {0}", fps);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtFps_5;
		int32_t L_1 = ___0_fps;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCA6E3FDAA3ECD3DF758EA8294AF4691F048EBCE2, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::SetMono(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_SetMono_m486846EB191BB59C15D23DCD7792E30D51FBB7F8 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, float ___0_mono, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C53AB1E9F50A9A6F110A6797117484FE84EB6F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtMono.text = string.Format("Mono: {0:f1}", mono);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtMono_6;
		float L_1 = ___0_mono;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral6C53AB1E9F50A9A6F110A6797117484FE84EB6F8, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::SetTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_SetTime_m2FFF835F8B37F6BBAA72519CFBCE9D002CCFE167 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, float ___0_seconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA552A92DA221411B13A7D344D508093A6FC6A6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtTime.text = string.Format("Time: {0:f1}", seconds);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtTime_7;
		float L_1 = ___0_seconds;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDA552A92DA221411B13A7D344D508093A6FC6A6D, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::OnScreenDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_OnScreenDimensionsChange_m525B6D96F663968C3E45FFE081F77234D922AAE4 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_CanvasRect != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____CanvasRect_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// _CanvasSize = _CanvasRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->____CanvasRect_22;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		__this->____CanvasSize_23 = L_3;
		// if (gameObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// MoveToPos();
		ConsoleMini_MoveToPos_m4D98D62EBA79DEA54A26D57D94852B9733A9E2B4(__this, (bool)0, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::UpdateLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_UpdateLog_m7FA5D01693BEB34565FFAE26DE0FAA5CF33ADB6D (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82845E67B5E12530128F5692B5527EE6C041456C);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// txtLog.text = _Log >= 999 ? "999" : _Log.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtLog_10;
		int32_t L_1 = __this->____Log_18;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)999))))
		{
			G_B2_0 = L_0;
			goto IL_0020;
		}
	}
	{
		int32_t* L_2 = (&__this->____Log_18);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = _stringLiteral82845E67B5E12530128F5692B5527EE6C041456C;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::UpdateWarring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_UpdateWarring_m7181A0F3A1E40755D6E4A85F1FAF62227117EDE5 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82845E67B5E12530128F5692B5527EE6C041456C);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// txtWarring.text = _Warring >= 999 ? "999" : _Warring.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtWarring_11;
		int32_t L_1 = __this->____Warring_19;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)999))))
		{
			G_B2_0 = L_0;
			goto IL_0020;
		}
	}
	{
		int32_t* L_2 = (&__this->____Warring_19);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = _stringLiteral82845E67B5E12530128F5692B5527EE6C041456C;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::UpdateError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_UpdateError_mF08E17EA0C582D4173FE3F60A3BD0F2680598B4C (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82845E67B5E12530128F5692B5527EE6C041456C);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// txtError.text = _Error >= 999 ? "999" : _Error.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtError_12;
		int32_t L_1 = __this->____Error_20;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)999))))
		{
			G_B2_0 = L_0;
			goto IL_0020;
		}
	}
	{
		int32_t* L_2 = (&__this->____Error_20);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = _stringLiteral82845E67B5E12530128F5692B5527EE6C041456C;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::ClearLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_ClearLog_m60EA70E39B70A893B2AE45E1D1817C892C8AD62E (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// txtLog.text = "0";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtLog_10;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// txtWarring.text = "0";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___txtWarring_11;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// txtError.text = "0";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___txtError_12;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_OnBeginDrag_m899F8BDA53DDB69F120EA0FF17FF89431112B612 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// _IsDrag = true;
		__this->____IsDrag_25 = (bool)1;
		// _CanvasGroup.alpha = 1;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->____CanvasGroup_17;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_0, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_OnDrag_mF204A73E4BF0D5366A3AA531576E111BC639FF76 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(_CanvasRect, eventData.position, eventData.pressEventCamera, out pos))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____CanvasRect_22;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// _Rect.localPosition = pos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->____Rect_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_8, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_OnEndDrag_m379F97DF59511F056898ED773E67FA512A2C3D65 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// _IsDrag = false;
		__this->____IsDrag_25 = (bool)0;
		// _CanvasSize = _CanvasRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->____CanvasRect_22;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		__this->____CanvasSize_23 = L_1;
		// MoveToPos();
		ConsoleMini_MoveToPos_m4D98D62EBA79DEA54A26D57D94852B9733A9E2B4(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_OnPointerClick_m7A014617E745B6B9BD8A22749D0CEDE87FB1D2B3 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_IsDrag)
		bool L_0 = __this->____IsDrag_25;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// RuntimeConsole.instance.ShowConsoleAll();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_1 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		RuntimeConsole_ShowConsoleAll_mED43AD1C046EBA6A996C18C3680B4683CA8B1604(L_1, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::MoveToPos(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini_MoveToPos_m4D98D62EBA79DEA54A26D57D94852B9733A9E2B4 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, bool ___0_imm, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// float toLeft = _CanvasSize.x * 0.5f + _Rect.localPosition.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->____CanvasSize_23);
		float L_1 = L_0->___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->____Rect_24;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, (0.5f))), L_4));
		// float toRight = _CanvasSize.x - toLeft;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->____CanvasSize_23);
		float L_6 = L_5->___x_0;
		float L_7 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// float toButtom = _CanvasSize.y * 0.5f + _Rect.localPosition.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->____CanvasSize_23);
		float L_9 = L_8->___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->____Rect_24;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_10, NULL);
		float L_12 = L_11.___y_3;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, (0.5f))), L_12));
		// float toUp = _CanvasSize.y - toButtom;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->____CanvasSize_23);
		float L_14 = L_13->___y_1;
		float L_15 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// float minX = Mathf.Min(toLeft, toRight);
		float L_16 = V_0;
		float L_17 = V_1;
		float L_18;
		L_18 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_16, L_17, NULL);
		// float minY = Mathf.Min(toButtom, toUp);
		float L_19 = V_2;
		float L_20 = V_3;
		float L_21;
		L_21 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_19, L_20, NULL);
		V_4 = L_21;
		// Vector2 tarPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_5 = L_22;
		// if (minX < minY)
		float L_23 = V_4;
		if ((!(((float)L_18) < ((float)L_23))))
		{
			goto IL_00f0;
		}
	}
	{
		// if (toLeft < toRight)
		float L_24 = V_0;
		float L_25 = V_1;
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_00ba;
		}
	}
	{
		// tarPos = new Vector2(_CanvasSize.x * -0.5f + _HalfSize.x, _Rect.localPosition.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&__this->____CanvasSize_23);
		float L_27 = L_26->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->____HalfSize_21);
		float L_29 = L_28->___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = __this->____Rect_24;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_30, NULL);
		float L_32 = L_31.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_27, (-0.5f))), L_29)), L_32, NULL);
		goto IL_015e;
	}

IL_00ba:
	{
		// tarPos = new Vector2(_CanvasSize.x * 0.5f - _HalfSize.x, _Rect.localPosition.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->____CanvasSize_23);
		float L_34 = L_33->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->____HalfSize_21);
		float L_36 = L_35->___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = __this->____Rect_24;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_37, NULL);
		float L_39 = L_38.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_34, (0.5f))), L_36)), L_39, NULL);
		goto IL_015e;
	}

IL_00f0:
	{
		// if (toButtom < toUp)
		float L_40 = V_2;
		float L_41 = V_3;
		if ((!(((float)L_40) < ((float)L_41))))
		{
			goto IL_012a;
		}
	}
	{
		// tarPos = new Vector2(_Rect.localPosition.x, _CanvasSize.y * -0.5f + _HalfSize.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = __this->____Rect_24;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_42, NULL);
		float L_44 = L_43.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->____CanvasSize_23);
		float L_46 = L_45->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = (&__this->____HalfSize_21);
		float L_48 = L_47->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), L_44, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_46, (-0.5f))), L_48)), NULL);
		goto IL_015e;
	}

IL_012a:
	{
		// tarPos = new Vector2(_Rect.localPosition.x, _CanvasSize.y * 0.5f - _HalfSize.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = __this->____Rect_24;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_49, NULL);
		float L_51 = L_50.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_52 = (&__this->____CanvasSize_23);
		float L_53 = L_52->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = (&__this->____HalfSize_21);
		float L_55 = L_54->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), L_51, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_53, (0.5f))), L_55)), NULL);
	}

IL_015e:
	{
		// if (_CorMove != null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_56 = __this->____CorMove_26;
		if (!L_56)
		{
			goto IL_0172;
		}
	}
	{
		// StopCoroutine(_CorMove);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_57 = __this->____CorMove_26;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_57, NULL);
	}

IL_0172:
	{
		// _CorMove = StartCoroutine(MoveTween(tarPos));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_5;
		RuntimeObject* L_59;
		L_59 = ConsoleMini_MoveTween_mD3B1EBE42CF23E572BDDD243AD69362B46E33683(__this, L_58, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_60;
		L_60 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_59, NULL);
		__this->____CorMove_26 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____CorMove_26), (void*)L_60);
		// }
		return;
	}
}
// System.Collections.IEnumerator LeeFramework.Console.ConsoleMini::MoveTween(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsoleMini_MoveTween_mD3B1EBE42CF23E572BDDD243AD69362B46E33683 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* L_0 = (U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501*)il2cpp_codegen_object_new(U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveTweenU3Ed__39__ctor_m35497BE038C19135419B2A55882460D4C32BE0DB(L_0, 0, NULL);
		U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* L_2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_pos;
		NullCheck(L_2);
		L_2->___pos_3 = L_3;
		return L_2;
	}
}
// System.Void LeeFramework.Console.ConsoleMini::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleMini__ctor_m64B52C79AD481B9A04451C7978439B6DBACBC870 (ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 _HalfSize = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->____HalfSize_21 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeeFramework.Console.ConsoleMini/<MoveTween>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTweenU3Ed__39__ctor_m35497BE038C19135419B2A55882460D4C32BE0DB (U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LeeFramework.Console.ConsoleMini/<MoveTween>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTweenU3Ed__39_System_IDisposable_Dispose_mE518F77535C532E6581ABC2EB1C7F8C37FFCE285 (U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LeeFramework.Console.ConsoleMini/<MoveTween>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveTweenU3Ed__39_MoveNext_m06A517298C6A473049D9DE0B6F70B54FC559ED81 (U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_00dc;
			}
			case 3:
			{
				goto IL_0109;
			}
			case 4:
			{
				goto IL_013d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Vector2.Distance(_Rect.localPosition, pos) < 0.1f)
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_3 = V_1;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = L_3->____Rect_24;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___pos_3;
		float L_8;
		L_8 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_6, L_7, NULL);
		if ((!(((float)L_8) < ((float)(0.100000001f)))))
		{
			goto IL_006a;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0063:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006a:
	{
		// float progress = 0;
		__this->___U3CprogressU3E5__2_4 = (0.0f);
		// Vector2 initPos = _Rect.localPosition;
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_9 = V_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9->____Rect_24;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_11, NULL);
		__this->___U3CinitPosU3E5__3_5 = L_12;
		goto IL_00e3;
	}

IL_008d:
	{
		// progress += Time.unscaledDeltaTime * 5f;
		float L_13 = __this->___U3CprogressU3E5__2_4;
		float L_14;
		L_14 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___U3CprogressU3E5__2_4 = ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(L_14, (5.0f)))));
		// _Rect.localPosition = Vector2.Lerp(initPos, pos, progress);
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_15 = V_1;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = L_15->____Rect_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___U3CinitPosU3E5__3_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___pos_3;
		float L_19 = __this->___U3CprogressU3E5__2_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_17, L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_20, NULL);
		NullCheck(L_16);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_16, L_21, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00dc:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00e3:
	{
		// while (progress < 1)
		float L_22 = __this->___U3CprogressU3E5__2_4;
		if ((((float)L_22) < ((float)(1.0f))))
		{
			goto IL_008d;
		}
	}
	{
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0109:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0144;
	}

IL_0112:
	{
		// _CanvasGroup.alpha -= 0.01f;
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_24 = V_1;
		NullCheck(L_24);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_25 = L_24->____CanvasGroup_17;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_26 = L_25;
		NullCheck(L_26);
		float L_27;
		L_27 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_26, NULL);
		NullCheck(L_26);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_26, ((float)il2cpp_codegen_subtract(L_27, (0.00999999978f))), NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_28 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_28, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_013d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0144:
	{
		// while (_CanvasGroup.alpha > 0.4f)
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_29 = V_1;
		NullCheck(L_29);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_30 = L_29->____CanvasGroup_17;
		NullCheck(L_30);
		float L_31;
		L_31 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_30, NULL);
		if ((((float)L_31) > ((float)(0.400000006f))))
		{
			goto IL_0112;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LeeFramework.Console.ConsoleMini/<MoveTween>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveTweenU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m53711618FB7E26FC9FD394DDBB5C50B08A92CCD2 (U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LeeFramework.Console.ConsoleMini/<MoveTween>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveTweenU3Ed__39_System_Collections_IEnumerator_Reset_m2BE49AFD6ADA5C95DF8A83114FD728929999C382 (U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveTweenU3Ed__39_System_Collections_IEnumerator_Reset_m2BE49AFD6ADA5C95DF8A83114FD728929999C382_RuntimeMethod_var)));
	}
}
// System.Object LeeFramework.Console.ConsoleMini/<MoveTween>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveTweenU3Ed__39_System_Collections_IEnumerator_get_Current_mD34222AC5C52C1A0690D42C7BE4F4CD5867C6AC1 (U3CMoveTweenU3Ed__39_t3C9911648D1EB24F681102008E2A432DAE84F501* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void LeeFramework.Console.Log::.ctor(System.String,System.String,UnityEngine.LogType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m6F4F4F7E1240D0867C5B0754E49A2719E8761D38 (Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, int32_t ___3_index, const RuntimeMethod* method) 
{
	{
		// public Log(string condition, string stackTrace, LogType type, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.condition = condition;
		String_t* L_0 = ___0_condition;
		__this->___condition_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___condition_0), (void*)L_0);
		// this.stackTrace = stackTrace;
		String_t* L_1 = ___1_stackTrace;
		__this->___stackTrace_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stackTrace_1), (void*)L_1);
		// this.type = type;
		int32_t L_2 = ___2_type;
		__this->___type_2 = L_2;
		// this.index = index;
		int32_t L_3 = ___3_index;
		__this->___index_3 = L_3;
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
// System.Void LeeFramework.Console.LogCache::.ctor(LeeFramework.Console.Log,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCache__ctor_m0289DF48CE6CA7B9B2C13B39395DDD6AAA2C09EF (LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* __this, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___0_l, int32_t ___1_i, int32_t ___2_fps, float ___3_mono, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public LogCache(Log l, int i, int fps, float mono)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// log = l;
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_0 = ___0_l;
		__this->___log_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___log_1), (void*)L_0);
		// index = i;
		int32_t L_1 = ___1_i;
		__this->___index_0 = L_1;
		// this.fps = fps;
		int32_t L_2 = ___2_fps;
		__this->___fps_3 = L_2;
		// this.mono = mono;
		float L_3 = ___3_mono;
		__this->___mono_4 = L_3;
		// scene = SceneManager.GetActiveScene().name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		__this->___scene_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scene_2), (void*)L_5);
		// time = Time.realtimeSinceStartup;
		float L_6;
		L_6 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___time_5 = L_6;
		// isFull = false;
		__this->___isFull_6 = (bool)0;
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
// System.Void LeeFramework.Console.LogDetail::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogDetail__ctor_m377AD9DEDC47896F5A34710C51938A3F7CD6896D (LogDetail_tDD7746A6F48E5DACFDC036129D2A578D60611CA1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 LeeFramework.Console.LogMgr::get_allLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogMgr_get_allLog_m56E48103A68EC6632439434C984BFCF3681BFA9D (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	{
		// public int allLog => _AllLog;
		int32_t L_0 = __this->____AllLog_2;
		return L_0;
	}
}
// System.Int32 LeeFramework.Console.LogMgr::get_allWarring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogMgr_get_allWarring_mEE74908BF35D3590CA587C6919C05CCA43C76671 (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	{
		// public int allWarring => _AllWarring;
		int32_t L_0 = __this->____AllWarring_3;
		return L_0;
	}
}
// System.Int32 LeeFramework.Console.LogMgr::get_allError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogMgr_get_allError_m88B26A4F922A2007CBF4744E915ED5E81246426C (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	{
		// public int allError => _AllError;
		int32_t L_0 = __this->____AllError_4;
		return L_0;
	}
}
// System.Void LeeFramework.Console.LogMgr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMgr__ctor_m4958520FE9F0E01A7F81A9B28A5B5CD40BAC5670 (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m82908819FF091FAA2AFC40CD56DE29D96D461AB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogMgr_LogCallback_m0B183A2DBA31D8F0B38FADC6DCEEC2AD77F80324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m9DBD61C6C6EB749A96CFFB847DF115A6F9B2F191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _AllLogIndex = -1;
		__this->____AllLogIndex_0 = (-1);
		// private List<Log> _AllLogs = new List<Log>();
		List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* L_0 = (List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8*)il2cpp_codegen_object_new(List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m82908819FF091FAA2AFC40CD56DE29D96D461AB1(L_0, List_1__ctor_m82908819FF091FAA2AFC40CD56DE29D96D461AB1_RuntimeMethod_var);
		__this->____AllLogs_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____AllLogs_1), (void*)L_0);
		// private Queue<Log>_TmpLogs = new Queue<Log>();
		Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_1 = (Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288*)il2cpp_codegen_object_new(Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_m9DBD61C6C6EB749A96CFFB847DF115A6F9B2F191(L_1, Queue_1__ctor_m9DBD61C6C6EB749A96CFFB847DF115A6F9B2F191_RuntimeMethod_var);
		__this->____TmpLogs_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____TmpLogs_5), (void*)L_1);
		// public LogMgr()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Application.logMessageReceivedThreaded -= LogCallback;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_2 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_2, __this, (intptr_t)((void*)LogMgr_LogCallback_m0B183A2DBA31D8F0B38FADC6DCEEC2AD77F80324_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceivedThreaded_m1E3BD279C50197C83C34222FD135D91C3F3313E2(L_2, NULL);
		// Application.logMessageReceivedThreaded += LogCallback;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_3 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_3, __this, (intptr_t)((void*)LogMgr_LogCallback_m0B183A2DBA31D8F0B38FADC6DCEEC2AD77F80324_RuntimeMethod_var), NULL);
		Application_add_logMessageReceivedThreaded_mDD8B873BF766306B205F549CF98249DD84FCA04C(L_3, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogMgr::LogCallback(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMgr_LogCallback_m0B183A2DBA31D8F0B38FADC6DCEEC2AD77F80324 (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1B8349C38164F3899563EEA26484829B4D550239_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m86665142A45B43BDAB817682404BA57144683F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* V_0 = NULL;
	List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* V_1 = NULL;
	bool V_2 = false;
	Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* V_3 = NULL;
	bool V_4 = false;
	{
		// if (string.IsNullOrEmpty(stackTrace))
		String_t* L_0 = ___1_stackTrace;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// stackTrace = new System.Diagnostics.StackTrace(true).ToString();
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_2 = (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853*)il2cpp_codegen_object_new(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StackTrace__ctor_m269D00E49783BC3205FD5C7E879888884D72107C(L_2, (bool)1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		___1_stackTrace = L_3;
	}

IL_0015:
	{
		// _AllLogIndex++;
		int32_t L_4 = __this->____AllLogIndex_0;
		__this->____AllLogIndex_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// Log log = new Log(condition, stackTrace, type, _AllLogIndex);
		String_t* L_5 = ___0_condition;
		String_t* L_6 = ___1_stackTrace;
		int32_t L_7 = ___2_type;
		int32_t L_8 = __this->____AllLogIndex_0;
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_9 = (Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA*)il2cpp_codegen_object_new(Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Log__ctor_m6F4F4F7E1240D0867C5B0754E49A2719E8761D38(L_9, L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		// lock (_AllLogs)
		List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* L_10 = __this->____AllLogs_1;
		V_1 = L_10;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c4:
			{// begin finally (depth: 1)
				{
					bool L_11 = V_2;
					if (!L_11)
					{
						goto IL_00cd;
					}
				}
				{
					List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* L_12 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_12, NULL);
				}

IL_00cd:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* L_13 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_13, (&V_2), NULL);
				// _AllLogs.Add(log);
				List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* L_14 = __this->____AllLogs_1;
				Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_15 = V_0;
				NullCheck(L_14);
				List_1_Add_m1B8349C38164F3899563EEA26484829B4D550239_inline(L_14, L_15, List_1_Add_m1B8349C38164F3899563EEA26484829B4D550239_RuntimeMethod_var);
				int32_t L_16 = ___2_type;
				switch (L_16)
				{
					case 0:
					{
						goto IL_008b_1;
					}
					case 1:
					{
						goto IL_0099_1;
					}
					case 2:
					{
						goto IL_007b_1;
					}
					case 3:
					{
						goto IL_006b_1;
					}
					case 4:
					{
						goto IL_008b_1;
					}
				}
			}
			{
				goto IL_0099_1;
			}

IL_006b_1:
			{
				// _AllLog++;
				int32_t L_17 = __this->____AllLog_2;
				__this->____AllLog_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
				// break;
				goto IL_0099_1;
			}

IL_007b_1:
			{
				// _AllWarring++;
				int32_t L_18 = __this->____AllWarring_3;
				__this->____AllWarring_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				// break;
				goto IL_0099_1;
			}

IL_008b_1:
			{
				// _AllError++;
				int32_t L_19 = __this->____AllError_4;
				__this->____AllError_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			}

IL_0099_1:
			{
				// lock (_TmpLogs)
				Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_20 = __this->____TmpLogs_5;
				V_3 = L_20;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b9_1:
					{// begin finally (depth: 2)
						{
							bool L_21 = V_4;
							if (!L_21)
							{
								goto IL_00c3_1;
							}
						}
						{
							Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_22 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_22, NULL);
						}

IL_00c3_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_23 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_23, (&V_4), NULL);
					// _TmpLogs.Enqueue(log);
					Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_24 = __this->____TmpLogs_5;
					Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_25 = V_0;
					NullCheck(L_24);
					Queue_1_Enqueue_m86665142A45B43BDAB817682404BA57144683F20(L_24, L_25, Queue_1_Enqueue_m86665142A45B43BDAB817682404BA57144683F20_RuntimeMethod_var);
					// }
					goto IL_00ce;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogMgr::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMgr_Update_mC44FDE84D111D5EEAAC0D2FFB29169705EB035B8 (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m655297BADA38FFB6A008FEF1A927C7A1EADB3B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mCFE80DDF36FD049462D3361929236321925B9C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (_TmpLogs)
		Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_0 = __this->____TmpLogs_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004f;
					}
				}
				{
					Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (_TmpLogs.Count > 0)
				Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_4 = __this->____TmpLogs_5;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = Queue_1_get_Count_mCFE80DDF36FD049462D3361929236321925B9C44_inline(L_4, Queue_1_get_Count_mCFE80DDF36FD049462D3361929236321925B9C44_RuntimeMethod_var);
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0036_1;
			}

IL_0021_1:
			{
				// RuntimeConsole.instance.AddLog(_TmpLogs.Dequeue());
				RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_6 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
				Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_7 = __this->____TmpLogs_5;
				NullCheck(L_7);
				Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_8;
				L_8 = Queue_1_Dequeue_m655297BADA38FFB6A008FEF1A927C7A1EADB3B40(L_7, Queue_1_Dequeue_m655297BADA38FFB6A008FEF1A927C7A1EADB3B40_RuntimeMethod_var);
				NullCheck(L_6);
				RuntimeConsole_AddLog_mF7D4CFF061ABB8768CB6C1F73B8CAE91A4414EF4(L_6, L_8, NULL);
			}

IL_0036_1:
			{
				// while (_TmpLogs.Count > 0)
				Queue_1_t59CF6ABC42CD2F5CA322A8F2BCEB167D7EFC2288* L_9 = __this->____TmpLogs_5;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = Queue_1_get_Count_mCFE80DDF36FD049462D3361929236321925B9C44_inline(L_9, Queue_1_get_Count_mCFE80DDF36FD049462D3361929236321925B9C44_RuntimeMethod_var);
				if ((((int32_t)L_10) > ((int32_t)0)))
				{
					goto IL_0021_1;
				}
			}

IL_0044_1:
			{
				// }
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogMgr::ClearLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMgr_ClearLog_m04448B7A8638EE3FAE47AEFB86219626FB7EB426 (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC2D697950F544095450C7C0974E20E8FE475D740_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _AllLogs.Clear();
		List_1_t310C6C0B2743E7483F0AB4EA3E5DD27BD28450A8* L_0 = __this->____AllLogs_1;
		NullCheck(L_0);
		List_1_Clear_mC2D697950F544095450C7C0974E20E8FE475D740_inline(L_0, List_1_Clear_mC2D697950F544095450C7C0974E20E8FE475D740_RuntimeMethod_var);
		// _AllLogIndex = -1;
		__this->____AllLogIndex_0 = (-1);
		// _AllLog = 0;
		__this->____AllLog_2 = 0;
		// _AllWarring = 0;
		__this->____AllWarring_3 = 0;
		// _AllError = 0;
		__this->____AllError_4 = 0;
		// RuntimeConsole.instance.consoleMini.ClearLog();
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_1 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_2 = L_1->___consoleMini_5;
		NullCheck(L_2);
		ConsoleMini_ClearLog_m60EA70E39B70A893B2AE45E1D1817C892C8AD62E(L_2, NULL);
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
// LeeFramework.Console.LogCache LeeFramework.Console.LogView::get_logCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* LogView_get_logCache_mD9743D4DAD8C94A9760E38CECAB1392B20C0DCD3 (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) 
{
	{
		// public LogCache logCache => _Cache;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = __this->____Cache_14;
		return L_0;
	}
}
// System.Void LeeFramework.Console.LogView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_Start_m9CD314B8C2702509BB5AF4016E03AD21C65F10A0 (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogView_OnClickLog_mEF80FF80E8B63A91E7CDE4086E37CEEDD8582CF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btnContent.onClick.AddListener(OnClickLog);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnContent_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)LogView_OnClickLog_mEF80FF80E8B63A91E7CDE4086E37CEEDD8582CF8_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::OnClickLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_OnClickLog_mEF80FF80E8B63A91E7CDE4086E37CEEDD8582CF8 (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RuntimeConsole.instance.consoleAll.ShowFullLog(this, _Cache.index);
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_0 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_1 = L_0->___consoleAll_6;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_2 = __this->____Cache_14;
		NullCheck(L_2);
		int32_t L_3 = L_2->___index_0;
		NullCheck(L_1);
		ConsoleAll_ShowFullLog_mF89A6D39AA3321332E0D5DBA33575F9572A8258E(L_1, __this, L_3, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::SetLog(LeeFramework.Console.LogCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetLog_m356B061E629C7F7CC357B537AA2411F69C97699B (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* ___0_cache, const RuntimeMethod* method) 
{
	{
		// _Cache = cache;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = ___0_cache;
		__this->____Cache_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Cache_14), (void*)L_0);
		// txtContent.text = cache.log.condition.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___txtContent_5;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_2 = ___0_cache;
		NullCheck(L_2);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_3 = L_2->___log_1;
		NullCheck(L_3);
		String_t* L_4 = L_3->___condition_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// SetLogType(cache.log.type);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_6 = ___0_cache;
		NullCheck(L_6);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_7 = L_6->___log_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___type_2;
		LogView_SetLogType_m9C532CFC09F53D831DBFA1FA271B4F9070AE60AC(__this, L_8, NULL);
		// _Tmp = cache.log.condition.ToString().ToLower();
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_9 = ___0_cache;
		NullCheck(L_9);
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_10 = L_9->___log_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->___condition_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_12, NULL);
		__this->____Tmp_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Tmp_11), (void*)L_13);
		// SetFps(cache.fps);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_14 = ___0_cache;
		NullCheck(L_14);
		int32_t L_15 = L_14->___fps_3;
		LogView_SetFps_m45F4522226D00DA1E712BBFF065EB20E6D67B9EB(__this, L_15, NULL);
		// SetMono(cache.mono);
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_16 = ___0_cache;
		NullCheck(L_16);
		float L_17 = L_16->___mono_4;
		LogView_SetMono_m4ADF8F843D39411EAA405157D950EDA29A0FA5EF(__this, L_17, NULL);
		// }
		return;
	}
}
// System.Boolean LeeFramework.Console.LogView::Check(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogView_Check_mA0AC7C55D36C9F596A959538F61474E15C857542 (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	{
		// return _Tmp.Contains(str.ToLower());
		String_t* L_0 = __this->____Tmp_11;
		String_t* L_1 = ___0_str;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void LeeFramework.Console.LogView::ShowFps(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_ShowFps_m4910FBFF7BECE937E47910BA8AD5067481D0C47E (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// imgFrame.gameObject.SetActive(value);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imgFrame_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2 = ___0_value;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::ShowMono(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_ShowMono_m0BE688F3F4AFAD7A669EAAA40B6CB9A3F24338AC (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// imgMono.gameObject.SetActive(value);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imgMono_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2 = ___0_value;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::SetBgColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetBgColor_mF3D8308CBB21C1FF44E1B79A00C250668B8CF8D6 (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B6_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B5_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B7_1 = NULL;
	{
		// bool isDouble = index % 2 == 0 || index == 0 ? true : false;
		int32_t L_0 = ___0_index;
		if (!((int32_t)(L_0%2)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_index;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000c;
	}

IL_000b:
	{
		G_B4_0 = 1;
	}

IL_000c:
	{
		V_0 = (bool)G_B4_0;
		// btnContent.GetComponent<Image>().color = isDouble ? _ColItemBlack : _ColItemWhite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___btnContent_4;
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_2, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		bool L_4 = V_0;
		G_B5_0 = L_3;
		if (L_4)
		{
			G_B6_0 = L_3;
			goto IL_0023;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->____ColItemWhite_16;
		G_B7_0 = L_5;
		G_B7_1 = G_B5_0;
		goto IL_0029;
	}

IL_0023:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->____ColItemBlack_15;
		G_B7_0 = L_6;
		G_B7_1 = G_B6_0;
	}

IL_0029:
	{
		NullCheck(G_B7_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B7_1, G_B7_0);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::SetFullBgColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetFullBgColor_m32FEAA4CA99DFCE4FF7DD418A0A18BC1A2DF8BFE (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btnContent.GetComponent<Image>().color = _ColItemBlue;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnContent_4;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_0, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->____ColItemBlue_17;
		NullCheck(L_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_Dispose_mA5412F3055116DEFED3273CE05E09675EE47BB5E (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _Fps = 0;
		__this->____Fps_12 = 0;
		// _Mono = 0;
		__this->____Mono_13 = (0.0f);
		// txtFps.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___txtFps_9;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// txtMono.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___txtMono_10;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::SetLogType(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetLogType_m9C532CFC09F53D831DBFA1FA271B4F9070AE60AC (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_type;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_001b;
			}
			case 4:
			{
				goto IL_0047;
			}
		}
	}
	{
		return;
	}

IL_001b:
	{
		// imgType.sprite = RuntimeConsole.instance.spriteLog;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___imgType_6;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_2 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___spriteLog_9;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_3, NULL);
		// break;
		return;
	}

IL_0031:
	{
		// imgType.sprite = RuntimeConsole.instance.spriteWarring;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imgType_6;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_5 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = L_5->___spriteWarring_10;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_6, NULL);
		// break;
		return;
	}

IL_0047:
	{
		// imgType.sprite = RuntimeConsole.instance.spriteError;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___imgType_6;
		RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* L_8 = ((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = L_8->___spriteError_11;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::SetFps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetFps_m45F4522226D00DA1E712BBFF065EB20E6D67B9EB (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, int32_t ___0_fps, const RuntimeMethod* method) 
{
	{
		// _Fps = fps;
		int32_t L_0 = ___0_fps;
		__this->____Fps_12 = L_0;
		// txtFps.text = fps.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___txtFps_9;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_fps), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::SetMono(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView_SetMono_m4ADF8F843D39411EAA405157D950EDA29A0FA5EF (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, float ___0_mono, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Mono = mono;
		float L_0 = ___0_mono;
		__this->____Mono_13 = L_0;
		// txtMono.text = mono.ToString("0.0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___txtMono_10;
		String_t* L_2;
		L_2 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___0_mono), _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.LogView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogView__ctor_mF32705FE78630B98130E3B6419F4A5FA3CA11E9C (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) 
{
	{
		// private Color _ColItemBlack = new Color(56 / 255f, 56 / 255f, 56 / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (0.219607845f), (0.219607845f), (0.219607845f), /*hidden argument*/NULL);
		__this->____ColItemBlack_15 = L_0;
		// private Color _ColItemWhite = new Color(75 / 255f, 75 / 255f, 75 / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.294117659f), (0.294117659f), (0.294117659f), /*hidden argument*/NULL);
		__this->____ColItemWhite_16 = L_1;
		// private Color _ColItemBlue = new Color(44 / 255f, 93 / 255f, 135 / 255f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (0.172549024f), (0.36470589f), (0.529411793f), /*hidden argument*/NULL);
		__this->____ColItemBlue_17 = L_2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// LeeFramework.Console.LogMgr LeeFramework.Console.RuntimeConsole::get_logMgr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* RuntimeConsole_get_logMgr_m10418FE2135026A38116DE9887ACF5250254BE86 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	{
		// return _LogMgr;
		LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* L_0 = __this->____LogMgr_12;
		return L_0;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_Awake_mBB74779415116B697876BDBC7C95C262B508B812 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// instance = this;
		((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		// _LogMgr = new LogMgr();
		LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* L_0 = (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297*)il2cpp_codegen_object_new(LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogMgr__ctor_m4958520FE9F0E01A7F81A9B28A5B5CD40BAC5670(L_0, NULL);
		__this->____LogMgr_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____LogMgr_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_Update_mB515947EB5FE72C54FEB51627E9A062441322AA0 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	{
		// _LogMgr.Update();
		LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* L_0 = __this->____LogMgr_12;
		NullCheck(L_0);
		LogMgr_Update_mC44FDE84D111D5EEAAC0D2FFB29169705EB035B8(L_0, NULL);
		// UpdateMini();
		RuntimeConsole_UpdateMini_m2BE31B851936F6569CB44EBE98F647A8A6E60867(__this, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_OnRectTransformDimensionsChange_m2AC141C8C371E97022413C01A2467A2904683842 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (consoleMini != null && consoleMini.gameObject.activeInHierarchy)
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_0 = __this->___consoleMini_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_2 = __this->___consoleMini_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// consoleMini.OnScreenDimensionsChange();
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_5 = __this->___consoleMini_5;
		NullCheck(L_5);
		ConsoleMini_OnScreenDimensionsChange_m525B6D96F663968C3E45FFE081F77234D922AAE4(L_5, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::UpdateMini()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_UpdateMini_m2BE31B851936F6569CB44EBE98F647A8A6E60867 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	{
		// UpdateTime();
		RuntimeConsole_UpdateTime_m4CE41C2520AB9474A3AEF60B85A4C5E28AD0431C(__this, NULL);
		// UpdateMono();
		RuntimeConsole_UpdateMono_m3ADA5115495C0E6AFE8F24FDCB20B13E52B083E6(__this, NULL);
		// UpdateFps();
		RuntimeConsole_UpdateFps_m18AE2AF9F7095243C61AECF1B8E36253F1B3F372(__this, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::UpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_UpdateTime_m4CE41C2520AB9474A3AEF60B85A4C5E28AD0431C (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (consoleMini != null)
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_0 = __this->___consoleMini_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// consoleMini.SetTime(Time.realtimeSinceStartup);
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_2 = __this->___consoleMini_5;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NullCheck(L_2);
		ConsoleMini_SetTime_m2FFF835F8B37F6BBAA72519CFBCE9D002CCFE167(L_2, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::UpdateMono()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_UpdateMono_m3ADA5115495C0E6AFE8F24FDCB20B13E52B083E6 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (consoleMini != null)
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_0 = __this->___consoleMini_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// _Mono = Profiler.GetMonoUsedSizeLong() / _MemorySize;
		int64_t L_2;
		L_2 = Profiler_GetMonoUsedSizeLong_m0502757AA9D86F43BEE50352F6082F978AB1C973(NULL);
		float L_3 = __this->____MemorySize_19;
		__this->____Mono_16 = ((float)(((float)L_2)/L_3));
		// consoleMini.SetMono(_Mono);
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_4 = __this->___consoleMini_5;
		float L_5 = __this->____Mono_16;
		NullCheck(L_4);
		ConsoleMini_SetMono_m486846EB191BB59C15D23DCD7792E30D51FBB7F8(L_4, L_5, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::UpdateFps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_UpdateFps_m18AE2AF9F7095243C61AECF1B8E36253F1B3F372 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (_IsFirst)
		bool L_0 = __this->____IsFirst_13;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// _IsFirst = false;
		__this->____IsFirst_13 = (bool)0;
		// _Fps = 0;
		__this->____Fps_15 = 0;
		// _Frames = 0;
		__this->____Frames_18 = 0;
		// _LastUpdate = Time.realtimeSinceStartup;
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->____LastUpdate_17 = L_1;
		// return;
		return;
	}

IL_0029:
	{
		// _Frames++;
		int32_t L_2 = __this->____Frames_18;
		__this->____Frames_18 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// float during = Time.realtimeSinceStartup - _LastUpdate;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_4 = __this->____LastUpdate_17;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// if (during > _FrameTime)
		float L_5 = V_0;
		float L_6 = __this->____FrameTime_14;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_008e;
		}
	}
	{
		// _Fps = (int)(_Frames / during);
		int32_t L_7 = __this->____Frames_18;
		float L_8 = V_0;
		__this->____Fps_15 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_7)/L_8)));
		// if (consoleMini != null)
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_9 = __this->___consoleMini_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		// consoleMini.SetFsp(_Fps);
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_11 = __this->___consoleMini_5;
		int32_t L_12 = __this->____Fps_15;
		NullCheck(L_11);
		ConsoleMini_SetFsp_mC78EDFD5D0DB6D9DC83F53CD3FFE333582E1DD73(L_11, L_12, NULL);
	}

IL_007c:
	{
		// _LastUpdate = Time.realtimeSinceStartup;
		float L_13;
		L_13 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->____LastUpdate_17 = L_13;
		// _Frames = 0;
		__this->____Frames_18 = 0;
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::AddLog(LeeFramework.Console.Log)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_AddLog_mF7D4CFF061ABB8768CB6C1F73B8CAE91A4414EF4 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* ___0_log, const RuntimeMethod* method) 
{
	{
		// consoleMini.AddLog(log.type);
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_0 = __this->___consoleMini_5;
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_1 = ___0_log;
		NullCheck(L_1);
		int32_t L_2 = L_1->___type_2;
		NullCheck(L_0);
		ConsoleMini_AddLog_mA8E738DF59DBE62CA32714B398D6EAB2784B4013(L_0, L_2, NULL);
		// consoleAll.AddLog(log, _Fps, _Mono);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_3 = __this->___consoleAll_6;
		Log_t6F2EA4505354F008B7F14AE46BCDF16C7FA900DA* L_4 = ___0_log;
		int32_t L_5 = __this->____Fps_15;
		float L_6 = __this->____Mono_16;
		NullCheck(L_3);
		ConsoleAll_AddLog_m7716156C93E7E28C58F267B79F1B13E773C0264A(L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::ShowConsoleAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_ShowConsoleAll_mED43AD1C046EBA6A996C18C3680B4683CA8B1604 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	{
		// consoleMini.SetActive(false);
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_0 = __this->___consoleMini_5;
		NullCheck(L_0);
		ConsoleMini_SetActive_mDD786354E1B289BF5F0C24DAF9502357A7A6F10D(L_0, (bool)0, NULL);
		// consoleAll.SetActive(true);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_1 = __this->___consoleAll_6;
		NullCheck(L_1);
		ConsoleAll_SetActive_mB981C428852FAD25C4D3A2C86B88DE874E2D5C03(L_1, (bool)1, NULL);
		// consoleBottom.SetActive(true);
		ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* L_2 = __this->___consoleBottom_8;
		NullCheck(L_2);
		ConsoleBottom_SetActive_m78701A0465EA288E1FCF4F4BC525AFD458FDB4B2(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::HideConsoleAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole_HideConsoleAll_m1847D24C142E2E79B66DC10D9E8F9CFC62532D33 (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	{
		// consoleMini.SetActive(true);
		ConsoleMini_tBF3B782E58637544D68CF22F7BD40DA957D791FA* L_0 = __this->___consoleMini_5;
		NullCheck(L_0);
		ConsoleMini_SetActive_mDD786354E1B289BF5F0C24DAF9502357A7A6F10D(L_0, (bool)1, NULL);
		// consoleAll.SetActive(false);
		ConsoleAll_t717B2AA97D8F4461550AC6ACDC954F0E675D8B4D* L_1 = __this->___consoleAll_6;
		NullCheck(L_1);
		ConsoleAll_SetActive_mB981C428852FAD25C4D3A2C86B88DE874E2D5C03(L_1, (bool)0, NULL);
		// consoleBottom.SetActive(false);
		ConsoleBottom_tFEC19F6B17CF7BB6BE28799207EB52984D2C82E6* L_2 = __this->___consoleBottom_8;
		NullCheck(L_2);
		ConsoleBottom_SetActive_m78701A0465EA288E1FCF4F4BC525AFD458FDB4B2(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LeeFramework.Console.RuntimeConsole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeConsole__ctor_mC05C836684434542034AEA7579C85B1185B5106A (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	{
		// private bool _IsFirst = true;
		__this->____IsFirst_13 = (bool)1;
		// private float _FrameTime = 0.25f;
		__this->____FrameTime_14 = (0.25f);
		// private float _MemorySize = 1024.0f * 1024.0f;
		__this->____MemorySize_19 = (1048576.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LoopListBase_get_isInit_mD96936A587FF74201C022BCC444FE5F25CC63FD5_inline (LoopListBase_t342BCA842B45F1108BF7D4C5ABA3849457D18463* __this, const RuntimeMethod* method) 
{
	{
		// public bool isInit => _IsInit;
		bool L_0 = __this->____IsInit_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* LogView_get_logCache_mD9743D4DAD8C94A9760E38CECAB1392B20C0DCD3_inline (LogView_t57E51D62335A30080544D55DC598B824BBEBA5E0* __this, const RuntimeMethod* method) 
{
	{
		// public LogCache logCache => _Cache;
		LogCache_t3F00450D9A8DD72BAD99ED3E54A012A0C864912E* L_0 = __this->____Cache_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* InputField_get_onValueChanged_mA9ABE178FE3EB05AEF3DC20C11349427C59916AE_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public OnChangeEvent onValueChanged { get { return m_OnValueChanged; } set { SetPropertyUtility.SetClass(ref m_OnValueChanged, value); } }
		OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* L_0 = __this->___m_OnValueChanged_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoopItem_get_instanceId_m5B2CF41D4C362288043326FD10ECE313CB27E184_inline (LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* __this, const RuntimeMethod* method) 
{
	{
		// public int instanceId => _InstanceId;
		int32_t L_0 = __this->____InstanceId_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LoopItem_get_id_mC73238D92DBD33964BD287B7761C245C082DA313_inline (LoopItem_t05209FC20875C55F17F07F9E946C84811DC7F9B8* __this, const RuntimeMethod* method) 
{
	{
		// public int id => _Id;
		int32_t L_0 = __this->____Id_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* RuntimeConsole_get_logMgr_m10418FE2135026A38116DE9887ACF5250254BE86_inline (RuntimeConsole_t9855DB2DEA9A46DCAF1870714E240DEEB0271A8D* __this, const RuntimeMethod* method) 
{
	{
		// return _LogMgr;
		LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* L_0 = __this->____LogMgr_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogMgr_get_allLog_m56E48103A68EC6632439434C984BFCF3681BFA9D_inline (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	{
		// public int allLog => _AllLog;
		int32_t L_0 = __this->____AllLog_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogMgr_get_allWarring_mEE74908BF35D3590CA587C6919C05CCA43C76671_inline (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	{
		// public int allWarring => _AllWarring;
		int32_t L_0 = __this->____AllWarring_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogMgr_get_allError_m88B26A4F922A2007CBF4744E915ED5E81246426C_inline (LogMgr_tF619422F5F31BE570BA9BB2AD3ABAEA1C52C3297* __this, const RuntimeMethod* method) 
{
	{
		// public int allError => _AllError;
		int32_t L_0 = __this->____AllError_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_b;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_a;
		float L_7 = L_6.___x_0;
		float L_8 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_a;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_b;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___0_a;
		float L_14 = L_13.___y_1;
		float L_15 = ___2_t;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
