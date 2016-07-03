#pragma once

#include "Global.hpp"

#include "Python.h"
#include "structmember.h"

struct Framebuffer {
	PyObject_HEAD
	int fbo;
};

struct VertexArray {
	PyObject_HEAD
	int vao;
};

struct VertexBuffer {
	PyObject_HEAD
	int vbo;
};

struct IndexBuffer {
	PyObject_HEAD
	int ibo;
};

struct UniformBuffer {
	PyObject_HEAD
	int ubo;
};

struct StorageBuffer {
	PyObject_HEAD
	int ssbo;
};

struct Texture {
	PyObject_HEAD
	int texture;
	int components;
};

struct Shader {
	PyObject_HEAD
	int shader;
};

struct Program {
	PyObject_HEAD
	int program;
};

struct AttributeLocation {
	PyObject_HEAD
	int location;
};

struct UniformLocation {
	PyObject_HEAD
	int location;
};

struct UniformBlockLocation {
	PyObject_HEAD
	int location;
};

struct ComputeShader {
	PyObject_HEAD
	int shader;
};

extern PyTypeObject FramebufferType;
extern PyTypeObject VertexArrayType;
extern PyTypeObject VertexBufferType;
extern PyTypeObject IndexBufferType;
extern PyTypeObject UniformBufferType;
extern PyTypeObject StorageBufferType;
extern PyTypeObject TextureType;
extern PyTypeObject ShaderType;
extern PyTypeObject ProgramType;
extern PyTypeObject AttributeLocationType;
extern PyTypeObject UniformLocationType;
extern PyTypeObject UniformBlockLocationType;
extern PyTypeObject ComputeShaderType;

PyObject * CreateFramebufferType(int fbo);
PyObject * CreateVertexArrayType(int vao);
PyObject * CreateVertexBufferType(int vbo);
PyObject * CreateIndexBufferType(int ibo);
PyObject * CreateUniformBufferType(int ubo);
PyObject * CreateStorageBufferType(int ssbo);
PyObject * CreateTextureType(int texture, int components);
PyObject * CreateShaderType(int shader);
PyObject * CreateProgramType(int program);
PyObject * CreateAttributeLocationType(int location);
PyObject * CreateUniformLocationType(int location);
PyObject * CreateUniformBlockLocationType(int location);
PyObject * CreateComputeShaderType(int shader);

bool ValidFramebufferType(Framebuffer * framebuffer);
bool ValidVertexArrayType(VertexArray * vertexArray);
bool ValidVertexBufferType(VertexBuffer * vertexBuffer);
bool ValidIndexBufferType(IndexBuffer * indexBuffer);
bool ValidUniformBufferType(UniformBuffer * uniformBuffer);
bool ValidStorageBufferType(StorageBuffer * storageBuffer);
bool ValidTextureType(Texture * texture);
bool ValidShaderType(Shader * shader);
bool ValidProgramType(Program * program);
bool ValidAttributeLocationType(AttributeLocation * attributeLocation);
bool ValidUniformLocationType(UniformLocation * uniformLocation);
bool ValidUniformBlockLocationType(UniformBlockLocation * uniformBlockLocation);
bool ValidComputeShaderType(ComputeShader * computeShader);
