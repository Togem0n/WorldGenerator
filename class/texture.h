#include <string>
#include <glad/glad.h>
#include <glm/glm.hpp>

#include "../stb_image/stb_image.h"

class Texture {
public:
    Texture(GLenum TextureTarget, const std::string& FileName);
    ~Texture();
    bool Load();
    void Bind(GLenum TextureUnit);
    void LoadInternal(void* image_data);
private:
    std::string m_fileName;
    GLenum m_textureTarget;
    GLuint m_textureObj;
    int m_imageWidth = 0;
    int m_imageHeight = 0;
    int m_imageBPP = 0;
};

