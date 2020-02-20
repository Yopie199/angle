// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// frame_capture_utils_autogen.cpp:
//   ANGLE Frame capture types and helper functions.

#include "libANGLE/frame_capture_utils_autogen.h"

#include "libANGLE/FrameCapture.h"

namespace angle
{
void WriteParamTypeToStream(std::ostream &os, ParamType paramType, const ParamValue &paramValue)
{
    switch (paramType)
    {
        case ParamType::TAlphaTestFunc:
            WriteParamValueToStream<ParamType::TAlphaTestFunc>(os, paramValue.AlphaTestFuncVal);
            break;
        case ParamType::TBufferBinding:
            WriteParamValueToStream<ParamType::TBufferBinding>(os, paramValue.BufferBindingVal);
            break;
        case ParamType::TBufferID:
            WriteParamValueToStream<ParamType::TBufferID>(os, paramValue.BufferIDVal);
            break;
        case ParamType::TBufferIDConstPointer:
            WriteParamValueToStream<ParamType::TBufferIDConstPointer>(
                os, paramValue.BufferIDConstPointerVal);
            break;
        case ParamType::TBufferIDPointer:
            WriteParamValueToStream<ParamType::TBufferIDPointer>(os, paramValue.BufferIDPointerVal);
            break;
        case ParamType::TBufferUsage:
            WriteParamValueToStream<ParamType::TBufferUsage>(os, paramValue.BufferUsageVal);
            break;
        case ParamType::TClientVertexArrayType:
            WriteParamValueToStream<ParamType::TClientVertexArrayType>(
                os, paramValue.ClientVertexArrayTypeVal);
            break;
        case ParamType::TCullFaceMode:
            WriteParamValueToStream<ParamType::TCullFaceMode>(os, paramValue.CullFaceModeVal);
            break;
        case ParamType::TDrawElementsType:
            WriteParamValueToStream<ParamType::TDrawElementsType>(os,
                                                                  paramValue.DrawElementsTypeVal);
            break;
        case ParamType::TFenceNVID:
            WriteParamValueToStream<ParamType::TFenceNVID>(os, paramValue.FenceNVIDVal);
            break;
        case ParamType::TFenceNVIDConstPointer:
            WriteParamValueToStream<ParamType::TFenceNVIDConstPointer>(
                os, paramValue.FenceNVIDConstPointerVal);
            break;
        case ParamType::TFenceNVIDPointer:
            WriteParamValueToStream<ParamType::TFenceNVIDPointer>(os,
                                                                  paramValue.FenceNVIDPointerVal);
            break;
        case ParamType::TFramebufferID:
            WriteParamValueToStream<ParamType::TFramebufferID>(os, paramValue.FramebufferIDVal);
            break;
        case ParamType::TFramebufferIDConstPointer:
            WriteParamValueToStream<ParamType::TFramebufferIDConstPointer>(
                os, paramValue.FramebufferIDConstPointerVal);
            break;
        case ParamType::TFramebufferIDPointer:
            WriteParamValueToStream<ParamType::TFramebufferIDPointer>(
                os, paramValue.FramebufferIDPointerVal);
            break;
        case ParamType::TGLDEBUGPROC:
            WriteParamValueToStream<ParamType::TGLDEBUGPROC>(os, paramValue.GLDEBUGPROCVal);
            break;
        case ParamType::TGLDEBUGPROCKHR:
            WriteParamValueToStream<ParamType::TGLDEBUGPROCKHR>(os, paramValue.GLDEBUGPROCKHRVal);
            break;
        case ParamType::TGLbitfield:
            WriteParamValueToStream<ParamType::TGLbitfield>(os, paramValue.GLbitfieldVal);
            break;
        case ParamType::TGLboolean:
            WriteParamValueToStream<ParamType::TGLboolean>(os, paramValue.GLbooleanVal);
            break;
        case ParamType::TGLbooleanConstPointer:
            WriteParamValueToStream<ParamType::TGLbooleanConstPointer>(
                os, paramValue.GLbooleanConstPointerVal);
            break;
        case ParamType::TGLbooleanPointer:
            WriteParamValueToStream<ParamType::TGLbooleanPointer>(os,
                                                                  paramValue.GLbooleanPointerVal);
            break;
        case ParamType::TGLbyte:
            WriteParamValueToStream<ParamType::TGLbyte>(os, paramValue.GLbyteVal);
            break;
        case ParamType::TGLbyteConstPointer:
            WriteParamValueToStream<ParamType::TGLbyteConstPointer>(
                os, paramValue.GLbyteConstPointerVal);
            break;
        case ParamType::TGLcharConstPointer:
            WriteParamValueToStream<ParamType::TGLcharConstPointer>(
                os, paramValue.GLcharConstPointerVal);
            break;
        case ParamType::TGLcharConstPointerPointer:
            WriteParamValueToStream<ParamType::TGLcharConstPointerPointer>(
                os, paramValue.GLcharConstPointerPointerVal);
            break;
        case ParamType::TGLcharPointer:
            WriteParamValueToStream<ParamType::TGLcharPointer>(os, paramValue.GLcharPointerVal);
            break;
        case ParamType::TGLclampx:
            WriteParamValueToStream<ParamType::TGLclampx>(os, paramValue.GLclampxVal);
            break;
        case ParamType::TGLdouble:
            WriteParamValueToStream<ParamType::TGLdouble>(os, paramValue.GLdoubleVal);
            break;
        case ParamType::TGLdoubleConstPointer:
            WriteParamValueToStream<ParamType::TGLdoubleConstPointer>(
                os, paramValue.GLdoubleConstPointerVal);
            break;
        case ParamType::TGLdoublePointer:
            WriteParamValueToStream<ParamType::TGLdoublePointer>(os, paramValue.GLdoublePointerVal);
            break;
        case ParamType::TGLeglImageOES:
            WriteParamValueToStream<ParamType::TGLeglImageOES>(os, paramValue.GLeglImageOESVal);
            break;
        case ParamType::TGLenum:
            WriteParamValueToStream<ParamType::TGLenum>(os, paramValue.GLenumVal);
            break;
        case ParamType::TGLenumConstPointer:
            WriteParamValueToStream<ParamType::TGLenumConstPointer>(
                os, paramValue.GLenumConstPointerVal);
            break;
        case ParamType::TGLenumPointer:
            WriteParamValueToStream<ParamType::TGLenumPointer>(os, paramValue.GLenumPointerVal);
            break;
        case ParamType::TGLfixed:
            WriteParamValueToStream<ParamType::TGLfixed>(os, paramValue.GLfixedVal);
            break;
        case ParamType::TGLfixedConstPointer:
            WriteParamValueToStream<ParamType::TGLfixedConstPointer>(
                os, paramValue.GLfixedConstPointerVal);
            break;
        case ParamType::TGLfixedPointer:
            WriteParamValueToStream<ParamType::TGLfixedPointer>(os, paramValue.GLfixedPointerVal);
            break;
        case ParamType::TGLfloat:
            WriteParamValueToStream<ParamType::TGLfloat>(os, paramValue.GLfloatVal);
            break;
        case ParamType::TGLfloatConstPointer:
            WriteParamValueToStream<ParamType::TGLfloatConstPointer>(
                os, paramValue.GLfloatConstPointerVal);
            break;
        case ParamType::TGLfloatPointer:
            WriteParamValueToStream<ParamType::TGLfloatPointer>(os, paramValue.GLfloatPointerVal);
            break;
        case ParamType::TGLint:
            WriteParamValueToStream<ParamType::TGLint>(os, paramValue.GLintVal);
            break;
        case ParamType::TGLint64Pointer:
            WriteParamValueToStream<ParamType::TGLint64Pointer>(os, paramValue.GLint64PointerVal);
            break;
        case ParamType::TGLintConstPointer:
            WriteParamValueToStream<ParamType::TGLintConstPointer>(os,
                                                                   paramValue.GLintConstPointerVal);
            break;
        case ParamType::TGLintPointer:
            WriteParamValueToStream<ParamType::TGLintPointer>(os, paramValue.GLintPointerVal);
            break;
        case ParamType::TGLintptr:
            WriteParamValueToStream<ParamType::TGLintptr>(os, paramValue.GLintptrVal);
            break;
        case ParamType::TGLintptrConstPointer:
            WriteParamValueToStream<ParamType::TGLintptrConstPointer>(
                os, paramValue.GLintptrConstPointerVal);
            break;
        case ParamType::TGLshort:
            WriteParamValueToStream<ParamType::TGLshort>(os, paramValue.GLshortVal);
            break;
        case ParamType::TGLshortConstPointer:
            WriteParamValueToStream<ParamType::TGLshortConstPointer>(
                os, paramValue.GLshortConstPointerVal);
            break;
        case ParamType::TGLsizei:
            WriteParamValueToStream<ParamType::TGLsizei>(os, paramValue.GLsizeiVal);
            break;
        case ParamType::TGLsizeiConstPointer:
            WriteParamValueToStream<ParamType::TGLsizeiConstPointer>(
                os, paramValue.GLsizeiConstPointerVal);
            break;
        case ParamType::TGLsizeiPointer:
            WriteParamValueToStream<ParamType::TGLsizeiPointer>(os, paramValue.GLsizeiPointerVal);
            break;
        case ParamType::TGLsizeiptr:
            WriteParamValueToStream<ParamType::TGLsizeiptr>(os, paramValue.GLsizeiptrVal);
            break;
        case ParamType::TGLsizeiptrConstPointer:
            WriteParamValueToStream<ParamType::TGLsizeiptrConstPointer>(
                os, paramValue.GLsizeiptrConstPointerVal);
            break;
        case ParamType::TGLsync:
            WriteParamValueToStream<ParamType::TGLsync>(os, paramValue.GLsyncVal);
            break;
        case ParamType::TGLubyte:
            WriteParamValueToStream<ParamType::TGLubyte>(os, paramValue.GLubyteVal);
            break;
        case ParamType::TGLubyteConstPointer:
            WriteParamValueToStream<ParamType::TGLubyteConstPointer>(
                os, paramValue.GLubyteConstPointerVal);
            break;
        case ParamType::TGLubytePointer:
            WriteParamValueToStream<ParamType::TGLubytePointer>(os, paramValue.GLubytePointerVal);
            break;
        case ParamType::TGLuint:
            WriteParamValueToStream<ParamType::TGLuint>(os, paramValue.GLuintVal);
            break;
        case ParamType::TGLuint64:
            WriteParamValueToStream<ParamType::TGLuint64>(os, paramValue.GLuint64Val);
            break;
        case ParamType::TGLuint64ConstPointer:
            WriteParamValueToStream<ParamType::TGLuint64ConstPointer>(
                os, paramValue.GLuint64ConstPointerVal);
            break;
        case ParamType::TGLuint64Pointer:
            WriteParamValueToStream<ParamType::TGLuint64Pointer>(os, paramValue.GLuint64PointerVal);
            break;
        case ParamType::TGLuintConstPointer:
            WriteParamValueToStream<ParamType::TGLuintConstPointer>(
                os, paramValue.GLuintConstPointerVal);
            break;
        case ParamType::TGLuintPointer:
            WriteParamValueToStream<ParamType::TGLuintPointer>(os, paramValue.GLuintPointerVal);
            break;
        case ParamType::TGLushort:
            WriteParamValueToStream<ParamType::TGLushort>(os, paramValue.GLushortVal);
            break;
        case ParamType::TGLushortConstPointer:
            WriteParamValueToStream<ParamType::TGLushortConstPointer>(
                os, paramValue.GLushortConstPointerVal);
            break;
        case ParamType::TGLushortPointer:
            WriteParamValueToStream<ParamType::TGLushortPointer>(os, paramValue.GLushortPointerVal);
            break;
        case ParamType::TGLvoidConstPointer:
            WriteParamValueToStream<ParamType::TGLvoidConstPointer>(
                os, paramValue.GLvoidConstPointerVal);
            break;
        case ParamType::TGLvoidConstPointerPointer:
            WriteParamValueToStream<ParamType::TGLvoidConstPointerPointer>(
                os, paramValue.GLvoidConstPointerPointerVal);
            break;
        case ParamType::TGraphicsResetStatus:
            WriteParamValueToStream<ParamType::TGraphicsResetStatus>(
                os, paramValue.GraphicsResetStatusVal);
            break;
        case ParamType::THandleType:
            WriteParamValueToStream<ParamType::THandleType>(os, paramValue.HandleTypeVal);
            break;
        case ParamType::TLightParameter:
            WriteParamValueToStream<ParamType::TLightParameter>(os, paramValue.LightParameterVal);
            break;
        case ParamType::TLogicalOperation:
            WriteParamValueToStream<ParamType::TLogicalOperation>(os,
                                                                  paramValue.LogicalOperationVal);
            break;
        case ParamType::TMaterialParameter:
            WriteParamValueToStream<ParamType::TMaterialParameter>(os,
                                                                   paramValue.MaterialParameterVal);
            break;
        case ParamType::TMatrixType:
            WriteParamValueToStream<ParamType::TMatrixType>(os, paramValue.MatrixTypeVal);
            break;
        case ParamType::TMemoryObjectID:
            WriteParamValueToStream<ParamType::TMemoryObjectID>(os, paramValue.MemoryObjectIDVal);
            break;
        case ParamType::TMemoryObjectIDConstPointer:
            WriteParamValueToStream<ParamType::TMemoryObjectIDConstPointer>(
                os, paramValue.MemoryObjectIDConstPointerVal);
            break;
        case ParamType::TMemoryObjectIDPointer:
            WriteParamValueToStream<ParamType::TMemoryObjectIDPointer>(
                os, paramValue.MemoryObjectIDPointerVal);
            break;
        case ParamType::TPathID:
            WriteParamValueToStream<ParamType::TPathID>(os, paramValue.PathIDVal);
            break;
        case ParamType::TPointParameter:
            WriteParamValueToStream<ParamType::TPointParameter>(os, paramValue.PointParameterVal);
            break;
        case ParamType::TPrimitiveMode:
            WriteParamValueToStream<ParamType::TPrimitiveMode>(os, paramValue.PrimitiveModeVal);
            break;
        case ParamType::TProgramPipelineID:
            WriteParamValueToStream<ParamType::TProgramPipelineID>(os,
                                                                   paramValue.ProgramPipelineIDVal);
            break;
        case ParamType::TProgramPipelineIDConstPointer:
            WriteParamValueToStream<ParamType::TProgramPipelineIDConstPointer>(
                os, paramValue.ProgramPipelineIDConstPointerVal);
            break;
        case ParamType::TProgramPipelineIDPointer:
            WriteParamValueToStream<ParamType::TProgramPipelineIDPointer>(
                os, paramValue.ProgramPipelineIDPointerVal);
            break;
        case ParamType::TProvokingVertexConvention:
            WriteParamValueToStream<ParamType::TProvokingVertexConvention>(
                os, paramValue.ProvokingVertexConventionVal);
            break;
        case ParamType::TQueryID:
            WriteParamValueToStream<ParamType::TQueryID>(os, paramValue.QueryIDVal);
            break;
        case ParamType::TQueryIDConstPointer:
            WriteParamValueToStream<ParamType::TQueryIDConstPointer>(
                os, paramValue.QueryIDConstPointerVal);
            break;
        case ParamType::TQueryIDPointer:
            WriteParamValueToStream<ParamType::TQueryIDPointer>(os, paramValue.QueryIDPointerVal);
            break;
        case ParamType::TQueryType:
            WriteParamValueToStream<ParamType::TQueryType>(os, paramValue.QueryTypeVal);
            break;
        case ParamType::TRenderbufferID:
            WriteParamValueToStream<ParamType::TRenderbufferID>(os, paramValue.RenderbufferIDVal);
            break;
        case ParamType::TRenderbufferIDConstPointer:
            WriteParamValueToStream<ParamType::TRenderbufferIDConstPointer>(
                os, paramValue.RenderbufferIDConstPointerVal);
            break;
        case ParamType::TRenderbufferIDPointer:
            WriteParamValueToStream<ParamType::TRenderbufferIDPointer>(
                os, paramValue.RenderbufferIDPointerVal);
            break;
        case ParamType::TSamplerID:
            WriteParamValueToStream<ParamType::TSamplerID>(os, paramValue.SamplerIDVal);
            break;
        case ParamType::TSamplerIDConstPointer:
            WriteParamValueToStream<ParamType::TSamplerIDConstPointer>(
                os, paramValue.SamplerIDConstPointerVal);
            break;
        case ParamType::TSamplerIDPointer:
            WriteParamValueToStream<ParamType::TSamplerIDPointer>(os,
                                                                  paramValue.SamplerIDPointerVal);
            break;
        case ParamType::TSemaphoreID:
            WriteParamValueToStream<ParamType::TSemaphoreID>(os, paramValue.SemaphoreIDVal);
            break;
        case ParamType::TSemaphoreIDConstPointer:
            WriteParamValueToStream<ParamType::TSemaphoreIDConstPointer>(
                os, paramValue.SemaphoreIDConstPointerVal);
            break;
        case ParamType::TSemaphoreIDPointer:
            WriteParamValueToStream<ParamType::TSemaphoreIDPointer>(
                os, paramValue.SemaphoreIDPointerVal);
            break;
        case ParamType::TShaderProgramID:
            WriteParamValueToStream<ParamType::TShaderProgramID>(os, paramValue.ShaderProgramIDVal);
            break;
        case ParamType::TShaderProgramIDConstPointer:
            WriteParamValueToStream<ParamType::TShaderProgramIDConstPointer>(
                os, paramValue.ShaderProgramIDConstPointerVal);
            break;
        case ParamType::TShaderProgramIDPointer:
            WriteParamValueToStream<ParamType::TShaderProgramIDPointer>(
                os, paramValue.ShaderProgramIDPointerVal);
            break;
        case ParamType::TShaderType:
            WriteParamValueToStream<ParamType::TShaderType>(os, paramValue.ShaderTypeVal);
            break;
        case ParamType::TShadingModel:
            WriteParamValueToStream<ParamType::TShadingModel>(os, paramValue.ShadingModelVal);
            break;
        case ParamType::TTextureEnvParameter:
            WriteParamValueToStream<ParamType::TTextureEnvParameter>(
                os, paramValue.TextureEnvParameterVal);
            break;
        case ParamType::TTextureEnvTarget:
            WriteParamValueToStream<ParamType::TTextureEnvTarget>(os,
                                                                  paramValue.TextureEnvTargetVal);
            break;
        case ParamType::TTextureID:
            WriteParamValueToStream<ParamType::TTextureID>(os, paramValue.TextureIDVal);
            break;
        case ParamType::TTextureIDConstPointer:
            WriteParamValueToStream<ParamType::TTextureIDConstPointer>(
                os, paramValue.TextureIDConstPointerVal);
            break;
        case ParamType::TTextureIDPointer:
            WriteParamValueToStream<ParamType::TTextureIDPointer>(os,
                                                                  paramValue.TextureIDPointerVal);
            break;
        case ParamType::TTextureTarget:
            WriteParamValueToStream<ParamType::TTextureTarget>(os, paramValue.TextureTargetVal);
            break;
        case ParamType::TTextureType:
            WriteParamValueToStream<ParamType::TTextureType>(os, paramValue.TextureTypeVal);
            break;
        case ParamType::TTransformFeedbackID:
            WriteParamValueToStream<ParamType::TTransformFeedbackID>(
                os, paramValue.TransformFeedbackIDVal);
            break;
        case ParamType::TTransformFeedbackIDConstPointer:
            WriteParamValueToStream<ParamType::TTransformFeedbackIDConstPointer>(
                os, paramValue.TransformFeedbackIDConstPointerVal);
            break;
        case ParamType::TTransformFeedbackIDPointer:
            WriteParamValueToStream<ParamType::TTransformFeedbackIDPointer>(
                os, paramValue.TransformFeedbackIDPointerVal);
            break;
        case ParamType::TUniformLocation:
            WriteParamValueToStream<ParamType::TUniformLocation>(os, paramValue.UniformLocationVal);
            break;
        case ParamType::TVertexArrayID:
            WriteParamValueToStream<ParamType::TVertexArrayID>(os, paramValue.VertexArrayIDVal);
            break;
        case ParamType::TVertexArrayIDConstPointer:
            WriteParamValueToStream<ParamType::TVertexArrayIDConstPointer>(
                os, paramValue.VertexArrayIDConstPointerVal);
            break;
        case ParamType::TVertexArrayIDPointer:
            WriteParamValueToStream<ParamType::TVertexArrayIDPointer>(
                os, paramValue.VertexArrayIDPointerVal);
            break;
        case ParamType::TVertexAttribType:
            WriteParamValueToStream<ParamType::TVertexAttribType>(os,
                                                                  paramValue.VertexAttribTypeVal);
            break;
        case ParamType::TvoidConstPointer:
            WriteParamValueToStream<ParamType::TvoidConstPointer>(os,
                                                                  paramValue.voidConstPointerVal);
            break;
        case ParamType::TvoidConstPointerPointer:
            WriteParamValueToStream<ParamType::TvoidConstPointerPointer>(
                os, paramValue.voidConstPointerPointerVal);
            break;
        case ParamType::TvoidPointer:
            WriteParamValueToStream<ParamType::TvoidPointer>(os, paramValue.voidPointerVal);
            break;
        case ParamType::TvoidPointerPointer:
            WriteParamValueToStream<ParamType::TvoidPointerPointer>(
                os, paramValue.voidPointerPointerVal);
            break;
        default:
            os << "unknown";
            break;
    }
}

const char *ParamTypeToString(ParamType paramType)
{
    switch (paramType)
    {
        case ParamType::TAlphaTestFunc:
            return "GLenum";
        case ParamType::TBufferBinding:
            return "GLenum";
        case ParamType::TBufferID:
            return "GLuint";
        case ParamType::TBufferIDConstPointer:
            return "const GLuint *";
        case ParamType::TBufferIDPointer:
            return "GLuint *";
        case ParamType::TBufferUsage:
            return "GLenum";
        case ParamType::TClientVertexArrayType:
            return "GLenum";
        case ParamType::TCullFaceMode:
            return "GLenum";
        case ParamType::TDrawElementsType:
            return "GLenum";
        case ParamType::TFenceNVID:
            return "GLuint";
        case ParamType::TFenceNVIDConstPointer:
            return "const GLuint *";
        case ParamType::TFenceNVIDPointer:
            return "GLuint *";
        case ParamType::TFramebufferID:
            return "GLuint";
        case ParamType::TFramebufferIDConstPointer:
            return "const GLuint *";
        case ParamType::TFramebufferIDPointer:
            return "GLuint *";
        case ParamType::TGLDEBUGPROC:
            return "GLDEBUGPROC";
        case ParamType::TGLDEBUGPROCKHR:
            return "GLDEBUGPROCKHR";
        case ParamType::TGLbitfield:
            return "GLbitfield";
        case ParamType::TGLboolean:
            return "GLboolean";
        case ParamType::TGLbooleanConstPointer:
            return "const GLboolean *";
        case ParamType::TGLbooleanPointer:
            return "GLboolean *";
        case ParamType::TGLbyte:
            return "GLbyte";
        case ParamType::TGLbyteConstPointer:
            return "const GLbyte *";
        case ParamType::TGLcharConstPointer:
            return "const GLchar *";
        case ParamType::TGLcharConstPointerPointer:
            return "const GLchar * const *";
        case ParamType::TGLcharPointer:
            return "GLchar *";
        case ParamType::TGLclampx:
            return "GLclampx";
        case ParamType::TGLdouble:
            return "GLdouble";
        case ParamType::TGLdoubleConstPointer:
            return "const GLdouble *";
        case ParamType::TGLdoublePointer:
            return "GLdouble *";
        case ParamType::TGLeglImageOES:
            return "GLeglImageOES";
        case ParamType::TGLenum:
            return "GLenum";
        case ParamType::TGLenumConstPointer:
            return "const GLenum *";
        case ParamType::TGLenumPointer:
            return "GLenum *";
        case ParamType::TGLfixed:
            return "GLfixed";
        case ParamType::TGLfixedConstPointer:
            return "const GLfixed *";
        case ParamType::TGLfixedPointer:
            return "GLfixed *";
        case ParamType::TGLfloat:
            return "GLfloat";
        case ParamType::TGLfloatConstPointer:
            return "const GLfloat *";
        case ParamType::TGLfloatPointer:
            return "GLfloat *";
        case ParamType::TGLint:
            return "GLint";
        case ParamType::TGLint64Pointer:
            return "GLint64 *";
        case ParamType::TGLintConstPointer:
            return "const GLint *";
        case ParamType::TGLintPointer:
            return "GLint *";
        case ParamType::TGLintptr:
            return "GLintptr";
        case ParamType::TGLintptrConstPointer:
            return "const GLintptr *";
        case ParamType::TGLshort:
            return "GLshort";
        case ParamType::TGLshortConstPointer:
            return "const GLshort *";
        case ParamType::TGLsizei:
            return "GLsizei";
        case ParamType::TGLsizeiConstPointer:
            return "const GLsizei *";
        case ParamType::TGLsizeiPointer:
            return "GLsizei *";
        case ParamType::TGLsizeiptr:
            return "GLsizeiptr";
        case ParamType::TGLsizeiptrConstPointer:
            return "const GLsizeiptr *";
        case ParamType::TGLsync:
            return "GLsync";
        case ParamType::TGLubyte:
            return "GLubyte";
        case ParamType::TGLubyteConstPointer:
            return "const GLubyte *";
        case ParamType::TGLubytePointer:
            return "GLubyte *";
        case ParamType::TGLuint:
            return "GLuint";
        case ParamType::TGLuint64:
            return "GLuint64";
        case ParamType::TGLuint64ConstPointer:
            return "const GLuint64 *";
        case ParamType::TGLuint64Pointer:
            return "GLuint64 *";
        case ParamType::TGLuintConstPointer:
            return "const GLuint *";
        case ParamType::TGLuintPointer:
            return "GLuint *";
        case ParamType::TGLushort:
            return "GLushort";
        case ParamType::TGLushortConstPointer:
            return "const GLushort *";
        case ParamType::TGLushortPointer:
            return "GLushort *";
        case ParamType::TGLvoidConstPointer:
            return "const GLvoid *";
        case ParamType::TGLvoidConstPointerPointer:
            return "const GLvoid * const *";
        case ParamType::TGraphicsResetStatus:
            return "GLenum";
        case ParamType::THandleType:
            return "GLenum";
        case ParamType::TLightParameter:
            return "GLenum";
        case ParamType::TLogicalOperation:
            return "GLenum";
        case ParamType::TMaterialParameter:
            return "GLenum";
        case ParamType::TMatrixType:
            return "GLenum";
        case ParamType::TMemoryObjectID:
            return "GLuint";
        case ParamType::TMemoryObjectIDConstPointer:
            return "const GLuint *";
        case ParamType::TMemoryObjectIDPointer:
            return "GLuint *";
        case ParamType::TPathID:
            return "GLuint";
        case ParamType::TPointParameter:
            return "GLenum";
        case ParamType::TPrimitiveMode:
            return "GLenum";
        case ParamType::TProgramPipelineID:
            return "GLuint";
        case ParamType::TProgramPipelineIDConstPointer:
            return "const GLuint *";
        case ParamType::TProgramPipelineIDPointer:
            return "GLuint *";
        case ParamType::TProvokingVertexConvention:
            return "GLenum";
        case ParamType::TQueryID:
            return "GLuint";
        case ParamType::TQueryIDConstPointer:
            return "const GLuint *";
        case ParamType::TQueryIDPointer:
            return "GLuint *";
        case ParamType::TQueryType:
            return "GLenum";
        case ParamType::TRenderbufferID:
            return "GLuint";
        case ParamType::TRenderbufferIDConstPointer:
            return "const GLuint *";
        case ParamType::TRenderbufferIDPointer:
            return "GLuint *";
        case ParamType::TSamplerID:
            return "GLuint";
        case ParamType::TSamplerIDConstPointer:
            return "const GLuint *";
        case ParamType::TSamplerIDPointer:
            return "GLuint *";
        case ParamType::TSemaphoreID:
            return "GLuint";
        case ParamType::TSemaphoreIDConstPointer:
            return "const GLuint *";
        case ParamType::TSemaphoreIDPointer:
            return "GLuint *";
        case ParamType::TShaderProgramID:
            return "GLuint";
        case ParamType::TShaderProgramIDConstPointer:
            return "const GLuint *";
        case ParamType::TShaderProgramIDPointer:
            return "GLuint *";
        case ParamType::TShaderType:
            return "GLenum";
        case ParamType::TShadingModel:
            return "GLenum";
        case ParamType::TTextureEnvParameter:
            return "GLenum";
        case ParamType::TTextureEnvTarget:
            return "GLenum";
        case ParamType::TTextureID:
            return "GLuint";
        case ParamType::TTextureIDConstPointer:
            return "const GLuint *";
        case ParamType::TTextureIDPointer:
            return "GLuint *";
        case ParamType::TTextureTarget:
            return "GLenum";
        case ParamType::TTextureType:
            return "GLenum";
        case ParamType::TTransformFeedbackID:
            return "GLuint";
        case ParamType::TTransformFeedbackIDConstPointer:
            return "const GLuint *";
        case ParamType::TTransformFeedbackIDPointer:
            return "GLuint *";
        case ParamType::TUniformLocation:
            return "GLenum";
        case ParamType::TVertexArrayID:
            return "GLuint";
        case ParamType::TVertexArrayIDConstPointer:
            return "const GLuint *";
        case ParamType::TVertexArrayIDPointer:
            return "GLuint *";
        case ParamType::TVertexAttribType:
            return "GLenum";
        case ParamType::TvoidConstPointer:
            return "const void *";
        case ParamType::TvoidConstPointerPointer:
            return "const void * const *";
        case ParamType::TvoidPointer:
            return "void *";
        case ParamType::TvoidPointerPointer:
            return "void **";
        default:
            UNREACHABLE();
            return "unknown";
    }
}

ResourceIDType GetResourceIDTypeFromParamType(ParamType paramType)
{
    switch (paramType)
    {
        case ParamType::TBufferID:
            return ResourceIDType::Buffer;
        case ParamType::TBufferIDConstPointer:
            return ResourceIDType::Buffer;
        case ParamType::TBufferIDPointer:
            return ResourceIDType::Buffer;
        case ParamType::TFenceNVID:
            return ResourceIDType::FenceNV;
        case ParamType::TFenceNVIDConstPointer:
            return ResourceIDType::FenceNV;
        case ParamType::TFenceNVIDPointer:
            return ResourceIDType::FenceNV;
        case ParamType::TFramebufferID:
            return ResourceIDType::Framebuffer;
        case ParamType::TFramebufferIDConstPointer:
            return ResourceIDType::Framebuffer;
        case ParamType::TFramebufferIDPointer:
            return ResourceIDType::Framebuffer;
        case ParamType::TMemoryObjectID:
            return ResourceIDType::MemoryObject;
        case ParamType::TMemoryObjectIDConstPointer:
            return ResourceIDType::MemoryObject;
        case ParamType::TMemoryObjectIDPointer:
            return ResourceIDType::MemoryObject;
        case ParamType::TPathID:
            return ResourceIDType::Path;
        case ParamType::TProgramPipelineID:
            return ResourceIDType::ProgramPipeline;
        case ParamType::TProgramPipelineIDConstPointer:
            return ResourceIDType::ProgramPipeline;
        case ParamType::TProgramPipelineIDPointer:
            return ResourceIDType::ProgramPipeline;
        case ParamType::TQueryID:
            return ResourceIDType::Query;
        case ParamType::TQueryIDConstPointer:
            return ResourceIDType::Query;
        case ParamType::TQueryIDPointer:
            return ResourceIDType::Query;
        case ParamType::TRenderbufferID:
            return ResourceIDType::Renderbuffer;
        case ParamType::TRenderbufferIDConstPointer:
            return ResourceIDType::Renderbuffer;
        case ParamType::TRenderbufferIDPointer:
            return ResourceIDType::Renderbuffer;
        case ParamType::TSamplerID:
            return ResourceIDType::Sampler;
        case ParamType::TSamplerIDConstPointer:
            return ResourceIDType::Sampler;
        case ParamType::TSamplerIDPointer:
            return ResourceIDType::Sampler;
        case ParamType::TSemaphoreID:
            return ResourceIDType::Semaphore;
        case ParamType::TSemaphoreIDConstPointer:
            return ResourceIDType::Semaphore;
        case ParamType::TSemaphoreIDPointer:
            return ResourceIDType::Semaphore;
        case ParamType::TShaderProgramID:
            return ResourceIDType::ShaderProgram;
        case ParamType::TShaderProgramIDConstPointer:
            return ResourceIDType::ShaderProgram;
        case ParamType::TShaderProgramIDPointer:
            return ResourceIDType::ShaderProgram;
        case ParamType::TTextureID:
            return ResourceIDType::Texture;
        case ParamType::TTextureIDConstPointer:
            return ResourceIDType::Texture;
        case ParamType::TTextureIDPointer:
            return ResourceIDType::Texture;
        case ParamType::TTransformFeedbackID:
            return ResourceIDType::TransformFeedback;
        case ParamType::TTransformFeedbackIDConstPointer:
            return ResourceIDType::TransformFeedback;
        case ParamType::TTransformFeedbackIDPointer:
            return ResourceIDType::TransformFeedback;
        case ParamType::TVertexArrayID:
            return ResourceIDType::VertexArray;
        case ParamType::TVertexArrayIDConstPointer:
            return ResourceIDType::VertexArray;
        case ParamType::TVertexArrayIDPointer:
            return ResourceIDType::VertexArray;
        default:
            return ResourceIDType::InvalidEnum;
    }
}

const char *GetResourceIDTypeName(ResourceIDType resourceIDType)
{
    switch (resourceIDType)
    {
        case ResourceIDType::Buffer:
            return "Buffer";
        case ResourceIDType::FenceNV:
            return "FenceNV";
        case ResourceIDType::Framebuffer:
            return "Framebuffer";
        case ResourceIDType::MemoryObject:
            return "MemoryObject";
        case ResourceIDType::Path:
            return "Path";
        case ResourceIDType::ProgramPipeline:
            return "ProgramPipeline";
        case ResourceIDType::Query:
            return "Query";
        case ResourceIDType::Renderbuffer:
            return "Renderbuffer";
        case ResourceIDType::Sampler:
            return "Sampler";
        case ResourceIDType::Semaphore:
            return "Semaphore";
        case ResourceIDType::ShaderProgram:
            return "ShaderProgram";
        case ResourceIDType::Texture:
            return "Texture";
        case ResourceIDType::TransformFeedback:
            return "TransformFeedback";
        case ResourceIDType::VertexArray:
            return "VertexArray";
        default:
            UNREACHABLE();
            return "GetResourceIDTypeName error";
    }
}
}  // namespace angle
