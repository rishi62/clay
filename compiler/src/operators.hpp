#ifndef __CLAYNAMES_HPP
#define __CLAYNAMES_HPP

namespace clay {

ObjectPtr primitive_addressOf();
ObjectPtr primitive_boolNot();
ObjectPtr primitive_Pointer();
ObjectPtr primitive_CodePointer();
ObjectPtr primitive_ExternalCodePointer();
ObjectPtr primitive_AttributeCCall();
ObjectPtr primitive_AttributeStdCall();
ObjectPtr primitive_AttributeFastCall();
ObjectPtr primitive_AttributeThisCall();
ObjectPtr primitive_AttributeLLVMCall();
ObjectPtr primitive_Array();
ObjectPtr primitive_Vec();
ObjectPtr primitive_Tuple();
ObjectPtr primitive_Union();
ObjectPtr primitive_Static();
ObjectPtr primitive_ByRef();
ObjectPtr primitive_RecordWithProperties();
ObjectPtr primitive_activeException();

ExprPtr primitive_expr_addressOf();
ExprPtr primitive_expr_boolNot();
ExprPtr primitive_expr_Pointer();
ExprPtr primitive_expr_CodePointer();
ExprPtr primitive_expr_ExternalCodePointer();
ExprPtr primitive_expr_AttributeCCall();
ExprPtr primitive_expr_AttributeStdCall();
ExprPtr primitive_expr_AttributeFastCall();
ExprPtr primitive_expr_AttributeThisCall();
ExprPtr primitive_expr_AttributeLLVMCall();
ExprPtr primitive_expr_Array();
ExprPtr primitive_expr_Vec();
ExprPtr primitive_expr_Tuple();
ExprPtr primitive_expr_Union();
ExprPtr primitive_expr_Static();
ExprPtr primitive_expr_ByRef();
ExprPtr primitive_expr_RecordWithProperties();
ExprPtr primitive_expr_activeException();

ObjectPtr operator_dereference();
ObjectPtr operator_plus();
ObjectPtr operator_minus();
ObjectPtr operator_operatorCall();
ObjectPtr operator_caseP();
ObjectPtr operator_tupleLiteral();
ObjectPtr operator_staticIndex();
ObjectPtr operator_index();
ObjectPtr operator_fieldRef();
ObjectPtr operator_call();
ObjectPtr operator_destroy();
ObjectPtr operator_copy();
ObjectPtr operator_move();
ObjectPtr operator_assign();
ObjectPtr operator_updateAssign();
ObjectPtr operator_indexAssign();
ObjectPtr operator_indexUpdateAssign();
ObjectPtr operator_fieldRefAssign();
ObjectPtr operator_fieldRefUpdateAssign();
ObjectPtr operator_staticIndexAssign();
ObjectPtr operator_staticIndexUpdateAssign();
ObjectPtr operator_callMain();
ObjectPtr operator_charLiteral();
ObjectPtr operator_iterator();
ObjectPtr operator_hasNextP();
ObjectPtr operator_next();
ObjectPtr operator_throwValue();
ObjectPtr operator_exceptionIsP();
ObjectPtr operator_exceptionAs();
ObjectPtr operator_exceptionAsAny();
ObjectPtr operator_continueException();
ObjectPtr operator_unhandledExceptionInExternal();
ObjectPtr operator_exceptionInInitializer();
ObjectPtr operator_exceptionInFinalizer();
ObjectPtr operator_packMultiValuedFreeVarByRef();
ObjectPtr operator_packMultiValuedFreeVar();
ObjectPtr operator_unpackMultiValuedFreeVarAndDereference();
ObjectPtr operator_unpackMultiValuedFreeVar();
ObjectPtr operator_variantReprType();
ObjectPtr operator_DispatchTagCount();
ObjectPtr operator_dispatchTag();
ObjectPtr operator_dispatchIndex();
ObjectPtr operator_invalidDispatch();
ObjectPtr operator_ifExpression();
ObjectPtr operator_typeToRValue();
ObjectPtr operator_typesToRValues();
ObjectPtr operator_doIntegerAddChecked();
ObjectPtr operator_doIntegerSubtractChecked();
ObjectPtr operator_doIntegerMultiplyChecked();
ObjectPtr operator_doIntegerQuotientChecked();
ObjectPtr operator_doIntegerRemainderChecked();
ObjectPtr operator_doIntegerShiftLeftChecked();
ObjectPtr operator_doIntegerNegateChecked();
ObjectPtr operator_doIntegerConvertChecked();

ExprPtr operator_expr_dereference();
ExprPtr operator_expr_plus();
ExprPtr operator_expr_minus();
ExprPtr operator_expr_operatorCall();
ExprPtr operator_expr_caseP();
ExprPtr operator_expr_tupleLiteral();
ExprPtr operator_expr_staticIndex();
ExprPtr operator_expr_index();
ExprPtr operator_expr_fieldRef();
ExprPtr operator_expr_call();
ExprPtr operator_expr_destroy();
ExprPtr operator_expr_copy();
ExprPtr operator_expr_move();
ExprPtr operator_expr_assign();
ExprPtr operator_expr_updateAssign();
ExprPtr operator_expr_indexAssign();
ExprPtr operator_expr_indexUpdateAssign();
ExprPtr operator_expr_fieldRefAssign();
ExprPtr operator_expr_fieldRefUpdateAssign();
ExprPtr operator_expr_staticIndexAssign();
ExprPtr operator_expr_staticIndexUpdateAssign();
ExprPtr operator_expr_callMain();
ExprPtr operator_expr_charLiteral();
ExprPtr operator_expr_iterator();
ExprPtr operator_expr_hasNextP();
ExprPtr operator_expr_next();
ExprPtr operator_expr_throwValue();
ExprPtr operator_expr_exceptionIsP();
ExprPtr operator_expr_exceptionAs();
ExprPtr operator_expr_exceptionAsAny();
ExprPtr operator_expr_continueException();
ExprPtr operator_expr_unhandledExceptionInExternal();
ExprPtr operator_expr_exceptionInInitializer();
ExprPtr operator_expr_exceptionInFinalizer();
ExprPtr operator_expr_packMultiValuedFreeVarByRef();
ExprPtr operator_expr_packMultiValuedFreeVar();
ExprPtr operator_expr_unpackMultiValuedFreeVarAndDereference();
ExprPtr operator_expr_unpackMultiValuedFreeVar();
ExprPtr operator_expr_variantReprType();
ExprPtr operator_expr_DispatchTagCount();
ExprPtr operator_expr_dispatchTag();
ExprPtr operator_expr_dispatchIndex();
ExprPtr operator_expr_invalidDispatch();
ExprPtr operator_expr_ifExpression();
ExprPtr operator_expr_typeToRValue();
ExprPtr operator_expr_typesToRValues();
ExprPtr operator_expr_doIntegerAddChecked();
ExprPtr operator_expr_doIntegerSubtractChecked();
ExprPtr operator_expr_doIntegerMultiplyChecked();
ExprPtr operator_expr_doIntegerQuotientChecked();
ExprPtr operator_expr_doIntegerRemainderChecked();
ExprPtr operator_expr_doIntegerShiftLeftChecked();
ExprPtr operator_expr_doIntegerNegateChecked();
ExprPtr operator_expr_doIntegerConvertChecked();

}

#endif
