#ifndef _INPUT_IMAGE_
#define _INPUT_IMAGE_

#define IMG_ROW 64
#define IMG_COL 64
#define IMG_DIM IMG_ROW*IMG_COL

#define FILT_WIN 3
#define FILT_SHIFT 0
#define FILT_DIM FILT_WIN*FILT_WIN

static Pixel In_Img[4096] = { 27, 2, 100, 247, 57, 162, 158, 147, 175, 13, 209, 67, 69, 48, 139, 139, 194, 12, 69, 94, 178, 115, 23, 252, 224, 192, 76, 92, 53, 46, 132, 229, 254, 144, 83, 44, 147, 98, 219, 93, 97, 80, 13, 106, 52, 14, 181, 35, 214, 238, 13, 67, 51, 64, 234, 197, 127, 205, 54, 135, 48, 50, 244, 234, 110, 235, 220, 134, 232, 65, 112, 154, 9, 144, 205, 198, 130, 76, 146, 166, 200, 230, 199, 29, 106, 211, 7, 155, 212, 243, 107, 20, 161, 83, 134, 249, 108, 91, 209, 54, 35, 38, 79, 34, 153, 255, 77, 13, 121, 53, 25, 251, 201, 45, 47, 156, 70, 127, 98, 225, 215, 19, 198, 254, 54, 218, 156, 250, 236, 231, 250, 226, 56, 38, 179, 39, 113, 150, 78, 237, 230, 157, 231, 72, 30, 18, 141, 242, 209, 108, 176, 42, 27, 247, 81, 69, 191, 51, 106, 188, 248, 161, 89, 135, 193, 22, 178, 229, 161, 41, 188, 41, 192, 121, 173, 20, 100, 150, 85, 185, 61, 69, 233, 87, 241, 9, 193, 181, 111, 143, 123, 28, 241, 79, 252, 125, 136, 1, 14, 110, 100, 237, 90, 51, 113, 59, 11, 219, 218, 95, 173, 235, 38, 120, 154, 27, 43, 210, 137, 76, 128, 135, 32, 28, 224, 104, 73, 18, 3, 183, 209, 21, 56, 252, 78, 200, 177, 134, 43, 147, 209, 243, 38, 53, 200, 122, 9, 80, 194, 168, 82, 182, 129, 120, 7, 179, 19, 123, 205, 235, 88, 2, 49, 83, 182, 24, 109, 253, 211, 127, 79, 29, 177, 29, 187, 115, 16, 50, 2, 253, 56, 21, 130, 78, 16, 2, 139, 170, 109, 165, 151, 80, 6, 133, 156, 200, 49, 31, 90, 38, 26, 54, 203, 165, 207, 162, 10, 101, 144, 54, 192, 129, 144, 78, 137, 173, 5, 128, 195, 41, 202, 149, 126, 82, 127, 86, 229, 180, 114, 60, 211, 201, 5, 154, 186, 177, 253, 177, 86, 62, 145, 71, 27, 67, 249, 91, 186, 29, 212, 37, 25, 211, 237, 158, 56, 126, 88, 192, 77, 220, 214, 55, 142, 232, 97, 46, 53, 124, 186, 224, 77, 210, 243, 162, 45, 131, 144, 166, 121, 154, 177, 217, 237, 41, 167, 63, 73, 43, 71, 106, 143, 241, 98, 232, 168, 135, 12, 5, 110, 105, 224, 236, 33, 129, 89, 60, 227, 210, 187, 67, 74, 242, 87, 147, 243, 196, 15, 230, 207, 95, 219, 138, 178, 138, 195, 167, 49, 151, 111, 188, 166, 218, 138, 6, 28, 156, 95, 164, 48, 148, 124, 113, 124, 112, 37, 25, 41, 163, 232, 110, 122, 224, 39, 219, 61, 121, 159, 252, 41, 170, 167, 69, 189, 77, 223, 72, 21, 224, 190, 102, 72, 62, 69, 39, 167, 198, 46, 10, 229, 238, 184, 247, 16, 145, 106, 161, 172, 103, 77, 71, 150, 226, 63, 139, 101, 99, 7, 21, 236, 129, 14, 254, 36, 77, 96, 146, 26, 37, 252, 188, 238, 56, 225, 155, 116, 114, 74, 158, 142, 135, 8, 167, 212, 32, 216, 178, 34, 46, 244, 146, 200, 106, 231, 10, 246, 208, 100, 172, 141, 174, 89, 141, 56, 244, 96, 110, 28, 97, 187, 200, 64, 127, 23, 83, 11, 14, 154, 10, 122, 16, 109, 189, 201, 139, 159, 69, 202, 61, 21, 86, 75, 90, 245, 43, 73, 136, 43, 121, 236, 217, 18, 184, 245, 47, 91, 109, 223, 38, 84, 123, 254, 192, 88, 100, 132, 182, 22, 47, 182, 157, 155, 11, 122, 134, 35, 220, 23, 54, 33, 249, 36, 101, 57, 32, 72, 97, 21, 102, 204, 119, 230, 34, 138, 48, 200, 209, 23, 126, 119, 14, 27, 183, 152, 68, 38, 54, 105, 45, 64, 89, 187, 121, 5, 39, 143, 186, 61, 247, 114, 216, 32, 207, 202, 134, 140, 104, 88, 116, 201, 111, 117, 40, 197, 79, 151, 10, 70, 200, 13, 176, 175, 176, 74, 132, 170, 10, 173, 152, 208, 247, 168, 145, 93, 29, 134, 20, 168, 97, 129, 71, 222, 214, 190, 70, 201, 196, 146, 228, 130, 53, 63, 84, 63, 129, 49, 211, 5, 15, 139, 197, 3, 142, 199, 95, 26, 138, 64, 242, 187, 190, 226, 226, 233, 165, 191, 20, 125, 5, 62, 20, 188, 131, 130, 251, 164, 236, 180, 146, 29, 219, 233, 170, 97, 67, 117, 29, 63, 230, 232, 223, 50, 191, 157, 42, 134, 109, 230, 239, 55, 202, 51, 155, 156, 178, 123, 55, 47, 124, 134, 94, 49, 88, 5, 75, 112, 253, 82, 67, 176, 220, 91, 159, 129, 225, 128, 223, 206, 91, 34, 70, 249, 161, 75, 55, 210, 52, 203, 91, 139, 46, 92, 196, 19, 21, 205, 152, 93, 132, 201, 33, 143, 243, 215, 216, 79, 54, 118, 27, 98, 151, 214, 141, 96, 186, 159, 106, 110, 46, 240, 4, 209, 238, 116, 197, 125, 88, 220, 253, 8, 99, 247, 31, 14, 36, 242, 228, 147, 153, 208, 237, 30, 34, 23, 20, 54, 250, 208, 175, 69, 123, 62, 112, 68, 108, 30, 10, 32, 155, 157, 118, 55, 115, 188, 19, 159, 207, 66, 127, 53, 113, 156, 249, 126, 241, 85, 140, 30, 12, 85, 245, 212, 120, 49, 171, 136, 18, 246, 63, 16, 15, 105, 247, 139, 3, 97, 254, 97, 20, 123, 227, 16, 130, 215, 91, 246, 132, 206, 183, 253, 164, 240, 220, 131, 24, 7, 197, 1, 199, 31, 14, 124, 25, 142, 121, 77, 41, 63, 45, 77, 85, 239, 220, 12, 50, 175, 10, 62, 82, 76, 193, 1, 73, 86, 73, 61, 213, 17, 125, 171, 225, 148, 204, 57, 62, 58, 234, 154, 111, 3, 82, 71, 46, 43, 132, 234, 163, 154, 219, 4, 98, 202, 43, 194, 208, 19, 48, 0, 36, 8, 109, 148, 157, 174, 107, 50, 90, 95, 39, 178, 134, 221, 48, 121, 69, 63, 128, 204, 74, 63, 225, 147, 32, 58, 153, 234, 165, 100, 228, 50, 218, 52, 106, 37, 142, 245, 201, 7, 242, 112, 111, 96, 192, 113, 156, 120, 53, 247, 12, 169, 62, 226, 15, 23, 181, 149, 149, 123, 168, 66, 245, 93, 137, 4, 64, 161, 216, 28, 77, 175, 240, 192, 111, 102, 55, 93, 159, 150, 13, 134, 142, 210, 223, 136, 244, 217, 156, 5, 181, 98, 141, 160, 97, 31, 232, 67, 91, 216, 45, 173, 119, 118, 19, 37, 81, 215, 43, 157, 80, 242, 148, 207, 67, 54, 24, 29, 19, 231, 214, 195, 216, 161, 161, 11, 7, 77, 0, 160, 47, 147, 231, 173, 44, 233, 202, 93, 72, 150, 161, 145, 7, 222, 227, 20, 128, 189, 151, 113, 90, 29, 162, 229, 56, 64, 180, 113, 236, 216, 193, 10, 129, 107, 221, 103, 228, 190, 146, 149, 158, 189, 214, 23, 153, 128, 213, 161, 231, 171, 235, 220, 222, 164, 131, 135, 62, 202, 149, 117, 1, 111, 110, 50, 120, 144, 84, 114, 7, 84, 86, 20, 203, 200, 192, 68, 121, 43, 251, 59, 218, 125, 54, 154, 69, 206, 100, 186, 107, 121, 242, 50, 149, 16, 19, 233, 24, 12, 174, 32, 99, 195, 119, 253, 179, 142, 69, 58, 134, 178, 10, 25, 90, 201, 30, 52, 221, 81, 38, 176, 103, 166, 11, 77, 176, 114, 15, 204, 48, 164, 149, 92, 64, 225, 2, 95, 34, 254, 39, 71, 126, 123, 93, 118, 55, 145, 123, 249, 244, 186, 47, 71, 72, 84, 103, 65, 89, 220, 234, 88, 142, 10, 205, 119, 243, 127, 15, 23, 35, 66, 72, 221, 114, 201, 52, 203, 82, 22, 43, 112, 164, 167, 12, 136, 181, 49, 144, 99, 106, 89, 159, 79, 242, 126, 21, 40, 162, 223, 53, 187, 64, 54, 11, 111, 83, 135, 165, 224, 82, 94, 180, 52, 225, 40, 45, 176, 238, 78, 223, 202, 76, 15, 183, 161, 148, 231, 197, 243, 54, 231, 28, 151, 251, 36, 23, 101, 31, 35, 136, 197, 218, 133, 216, 252, 165, 162, 223, 19, 203, 116, 19, 77, 188, 62, 178, 153, 142, 23, 190, 118, 25, 25, 46, 217, 64, 206, 48, 217, 106, 213, 7, 247, 170, 213, 70, 180, 108, 167, 207, 26, 197, 47, 17, 23, 87, 251, 172, 246, 131, 43, 109, 227, 41, 182, 20, 249, 253, 13, 147, 55, 218, 81, 138, 102, 135, 157, 175, 169, 90, 44, 160, 189, 66, 78, 131, 6, 89, 222, 214, 10, 119, 134, 213, 86, 189, 123, 196, 75, 207, 176, 13, 172, 41, 232, 59, 102, 108, 229, 193, 105, 164, 15, 198, 242, 249, 124, 205, 14, 162, 127, 137, 4, 108, 218, 11, 71, 177, 33, 95, 229, 194, 75, 62, 153, 107, 238, 253, 40, 20, 187, 236, 48, 17, 183, 165, 184, 160, 8, 161, 25, 105, 206, 101, 150, 50, 70, 224, 35, 63, 3, 24, 169, 34, 218, 44, 21, 6, 0, 184, 230, 138, 169, 138, 190, 17, 79, 155, 75, 22, 127, 86, 90, 36, 113, 252, 105, 118, 57, 161, 77, 53, 17, 164, 70, 90, 101, 223, 161, 12, 186, 254, 61, 254, 147, 162, 250, 82, 174, 170, 196, 153, 81, 250, 147, 155, 235, 10, 250, 188, 242, 237, 129, 169, 120, 98, 245, 224, 253, 144, 253, 183, 55, 236, 14, 170, 199, 31, 171, 107, 90, 79, 77, 152, 75, 198, 22, 199, 111, 32, 227, 42, 128, 17, 50, 248, 96, 165, 165, 182, 146, 239, 229, 146, 222, 67, 95, 40, 31, 139, 140, 245, 46, 18, 209, 222, 241, 35, 104, 55, 60, 129, 12, 171, 18, 75, 15, 80, 123, 243, 150, 78, 164, 171, 198, 132, 66, 145, 79, 130, 1, 33, 46, 113, 8, 157, 128, 167, 206, 16, 130, 72, 74, 228, 223, 121, 205, 147, 100, 162, 85, 179, 33, 199, 251, 179, 164, 26, 23, 78, 87, 87, 86, 221, 114, 208, 25, 112, 227, 187, 61, 140, 59, 171, 108, 121, 26, 134, 49, 30, 211, 64, 3, 211, 2, 159, 245, 58, 79, 68, 165, 214, 218, 186, 222, 126, 123, 31, 101, 115, 221, 153, 185, 147, 210, 75, 82, 6, 207, 102, 227, 41, 246, 58, 143, 254, 185, 211, 70, 150, 125, 40, 83, 80, 63, 47, 139, 91, 174, 121, 47, 90, 14, 111, 146, 47, 97, 231, 236, 157, 163, 193, 201, 64, 132, 58, 30, 135, 79, 208, 108, 247, 66, 106, 244, 237, 219, 218, 17, 6, 219, 101, 38, 154, 249, 55, 44, 140, 57, 101, 252, 113, 118, 255, 186, 182, 147, 66, 28, 19, 111, 137, 255, 149, 29, 134, 50, 162, 69, 244, 96, 176, 131, 248, 225, 66, 7, 217, 233, 14, 163, 248, 11, 229, 80, 62, 24, 195, 51, 136, 249, 163, 106, 100, 190, 41, 238, 43, 206, 64, 149, 231, 146, 57, 120, 147, 41, 161, 55, 128, 79, 204, 153, 81, 254, 3, 60, 55, 232, 96, 3, 16, 244, 119, 138, 47, 152, 140, 33, 200, 117, 64, 58, 234, 176, 170, 193, 57, 69, 12, 22, 105, 52, 198, 40, 254, 118, 183, 50, 235, 86, 130, 164, 125, 156, 27, 90, 178, 251, 155, 147, 62, 156, 8, 61, 1, 151, 91, 106, 144, 231, 191, 254, 251, 175, 97, 22, 60, 18, 175, 165, 83, 58, 55, 235, 14, 26, 10, 32, 69, 123, 115, 21, 191, 53, 125, 7, 239, 243, 42, 183, 52, 238, 224, 189, 207, 36, 185, 56, 33, 109, 247, 73, 76, 161, 178, 4, 75, 18, 177, 247, 169, 40, 13, 22, 193, 84, 184, 143, 118, 209, 42, 170, 77, 191, 11, 173, 1, 90, 136, 10, 60, 107, 166, 47, 72, 102, 240, 65, 2, 96, 167, 79, 139, 248, 114, 233, 230, 37, 94, 23, 103, 253, 247, 165, 36, 76, 87, 209, 29, 176, 180, 75, 252, 249, 135, 85, 225, 46, 71, 123, 55, 200, 74, 216, 154, 33, 97, 234, 214, 105, 12, 246, 137, 156, 193, 156, 61, 131, 116, 73, 122, 35, 242, 241, 96, 139, 139, 54, 68, 36, 22, 115, 41, 1, 180, 132, 166, 243, 185, 177, 57, 205, 10, 22, 64, 194, 124, 22, 151, 202, 53, 46, 84, 5, 64, 174, 202, 181, 249, 184, 212, 181, 17, 88, 100, 150, 102, 81, 112, 199, 128, 170, 122, 149, 141, 152, 60, 137, 212, 254, 110, 242, 244, 236, 153, 41, 31, 116, 19, 77, 179, 35, 170, 119, 28, 87, 149, 52, 29, 134, 149, 113, 40, 138, 101, 119, 102, 239, 225, 141, 62, 150, 71, 58, 21, 212, 166, 176, 128, 208, 153, 233, 242, 18, 130, 121, 238, 48, 200, 82, 11, 94, 250, 184, 3, 118, 73, 90, 14, 241, 72, 137, 27, 94, 137, 184, 103, 8, 124, 179, 92, 243, 204, 67, 58, 254, 66, 99, 223, 100, 22, 213, 149, 143, 175, 85, 52, 153, 36, 244, 157, 153, 57, 24, 125, 73, 143, 211, 113, 10, 199, 225, 104, 76, 125, 154, 86, 128, 83, 205, 40, 136, 134, 36, 60, 49, 164, 56, 3, 130, 193, 102, 229, 145, 43, 248, 88, 218, 149, 42, 125, 24, 233, 246, 37, 207, 58, 90, 39, 208, 153, 199, 194, 76, 16, 175, 234, 77, 206, 127, 6, 53, 58, 231, 167, 170, 113, 242, 221, 74, 160, 248, 104, 116, 172, 46, 218, 41, 177, 193, 191, 20, 116, 26, 173, 54, 155, 174, 187, 152, 1, 57, 20, 205, 187, 1, 133, 46, 40, 33, 2, 203, 160, 47, 107, 42, 58, 216, 150, 119, 49, 195, 40, 167, 178, 25, 24, 8, 138, 183, 239, 123, 153, 147, 226, 229, 94, 85, 53, 196, 95, 169, 207, 117, 133, 60, 252, 95, 75, 43, 185, 211, 15, 89, 156, 116, 224, 163, 137, 6, 112, 67, 184, 122, 21, 146, 82, 183, 17, 172, 184, 172, 108, 145, 159, 47, 182, 52, 112, 134, 82, 91, 139, 212, 66, 46, 137, 150, 110, 52, 153, 138, 211, 131, 116, 206, 251, 246, 66, 143, 61, 119, 201, 172, 98, 214, 81, 13, 221, 243, 37, 109, 126, 180, 89, 120, 171, 184, 189, 181, 82, 16, 246, 67, 178, 182, 175, 45, 54, 8, 49, 161, 252, 236, 35, 122, 61, 109, 55, 91, 127, 11, 236, 142, 13, 154, 86, 56, 20, 0, 20, 151, 8, 206, 181, 234, 90, 146, 251, 130, 51, 247, 49, 130, 147, 232, 70, 147, 49, 248, 239, 17, 141, 47, 214, 24, 163, 113, 158, 195, 253, 47, 136, 185, 47, 203, 99, 219, 112, 241, 86, 12, 233, 125, 86, 223, 10, 253, 67, 30, 222, 18, 33, 26, 71, 238, 78, 253, 144, 220, 75, 240, 192, 125, 238, 110, 131, 1, 122, 73, 133, 80, 214, 210, 219, 251, 214, 28, 135, 51, 127, 126, 66, 44, 164, 249, 251, 189, 82, 126, 114, 254, 77, 225, 83, 243, 190, 66, 174, 89, 216, 68, 202, 54, 127, 99, 181, 59, 75, 162, 198, 60, 65, 232, 74, 74, 221, 239, 93, 24, 142, 99, 217, 209, 145, 76, 56, 71, 38, 135, 49, 229, 231, 233, 136, 107, 99, 22, 106, 112, 34, 238, 85, 177, 36, 69, 243, 235, 131, 225, 195, 53, 130, 115, 159, 100, 164, 152, 20, 183, 11, 139, 220, 181, 25, 181, 54, 197, 63, 6, 89, 26, 202, 76, 248, 223, 202, 201, 31, 234, 48, 18, 78, 245, 20, 83, 191, 218, 205, 235, 159, 106, 126, 84, 160, 145, 23, 153, 218, 243, 224, 58, 100, 212, 173, 22, 59, 80, 121, 166, 94, 213, 35, 214, 185, 170, 80, 183, 73, 215, 89, 205, 187, 102, 156, 250, 136, 45, 79, 189, 208, 134, 148, 175, 65, 232, 245, 44, 106, 179, 228, 138, 210, 26, 27, 93, 131, 0, 242, 39, 123, 122, 102, 78, 21, 227, 221, 62, 79, 38, 76, 34, 207, 239, 154, 197, 112, 131, 247, 46, 112, 184, 247, 97, 1, 73, 159, 230, 235, 133, 2, 108, 113, 114, 21, 212, 74, 193, 25, 92, 14, 233, 68, 80, 94, 82, 56, 156, 201, 146, 94, 94, 79, 23, 121, 190, 39, 158, 126, 207, 51, 155, 31, 39, 120, 177, 176, 192, 201, 1, 80, 217, 58, 185, 152, 4, 17, 134, 11, 15, 168, 148, 7, 155, 18, 95, 66, 54, 250, 129, 31, 95, 223, 203, 186, 175, 99, 10, 136, 205, 119, 36, 65, 213, 2, 95, 76, 186, 137, 215, 142, 128, 83, 28, 222, 99, 154, 12, 153, 235, 69, 118, 186, 20, 22, 246, 96, 91, 71, 47, 232, 88, 5, 218, 9, 233, 23, 183, 247, 189, 58, 189, 104, 174, 129, 117, 138, 23, 115, 188, 117, 3, 30, 172, 215, 183, 55, 103, 33, 135, 230, 72, 165, 172, 246, 25, 191, 24, 59, 230, 55, 114, 46, 151, 67, 148, 187, 170, 57, 144, 34, 222, 111, 170, 111, 246, 222, 73, 201, 176, 235, 181, 145, 41, 29, 55, 36, 91, 63, 97, 17, 18, 193, 11, 113, 107, 209, 223, 4, 121, 164, 49, 158, 16, 168, 246, 77, 63, 141, 251, 171, 245, 31, 13, 227, 120, 95, 139, 0, 49, 38, 254, 54, 67, 137, 205, 198, 29, 10, 176, 164, 58, 17, 158, 46, 243, 121, 126, 245, 253, 93, 181, 126, 240, 239, 57, 204, 254, 29, 1, 143, 134, 97, 97, 69, 135, 177, 58, 36, 241, 84, 94, 167, 29, 189, 14, 47, 169, 107, 157, 12, 180, 194, 2, 18, 115, 236, 119, 28, 107, 152, 122, 133, 116, 73, 189, 67, 57, 163, 174, 183, 196, 20, 7, 134, 255, 165, 173, 116, 245, 40, 38, 203, 212, 147, 154, 143, 127, 182, 35, 131, 17, 160, 255, 51, 209, 232, 134, 159, 48, 61, 44, 112, 181, 119, 8, 117, 99, 150, 218, 245, 115, 84, 198, 147, 33, 184, 115, 24, 178, 131, 245, 7, 52, 112, 80, 230, 51, 10, 244, 28, 108, 247, 126, 216, 63, 213, 55, 69, 155, 13, 100, 83, 32, 75, 61, 155, 127, 64, 252, 100, 154, 124, 190, 254, 253, 31, 106, 172, 241, 218, 55, 68, 51, 109, 124, 241, 136, 244, 87, 69, 110, 230, 206, 109, 134, 214, 116, 92, 19, 38, 75, 238, 14, 39, 171, 170, 211, 47, 124, 232, 203, 168, 250, 61, 152, 40, 64, 102, 113, 97, 35, 118, 135, 166, 232, 122, 188, 152, 248, 151, 216, 224, 186, 251, 191, 91, 236, 173, 56, 178, 166, 64, 38, 184, 245, 220, 177, 149, 185, 76, 254, 37, 138, 245, 57, 236, 198, 227, 211, 135, 111, 159, 137, 167, 156, 157, 130, 227, 216, 33, 208, 91, 111, 11, 145, 130, 93, 101, 49, 238, 246, 156, 83, 124, 171, 254, 231, 163, 148, 12, 249, 206, 230, 163, 224, 11, 183, 180, 125, 236, 254, 109, 226, 26, 187, 105, 245, 31, 48, 230, 81, 115, 141, 25, 56, 2, 111, 2, 95, 160, 119, 184, 250, 246, 228, 179, 173, 140, 113, 179, 162, 101, 208, 103, 103, 236, 144, 120, 3, 138, 72, 199, 18, 240, 112, 117, 1, 225, 107, 251, 37, 165, 148, 6, 94, 238, 182, 206, 129, 153, 170, 69, 7, 152, 146, 142, 86, 125, 189, 155, 210, 117, 154, 120, 220, 89, 60, 10, 85, 161, 191, 40, 90, 231, 177, 254, 126, 248, 170, 226, 177, 11, 225, 245, 76, 73, 191, 174, 53, 36, 66, 34, 182, 151, 193, 141, 168, 254, 105, 76, 15, 249, 29, 172, 137, 140, 253, 23, 130, 150, 48, 234, 135, 62, 152, 1, 17, 73, 163, 62, 81, 105, 70, 59, 155, 101, 225, 152, 146, 213, 72, 144, 150, 218, 72, 136, 236, 178, 65, 227, 157, 28, 13, 43, 23, 69, 96, 207, 127, 96, 209, 131, 31, 253, 28, 161, 53, 174, 124, 120, 197, 125, 80, 57, 15, 206, 177, 234, 141, 51, 251, 188, 80, 224, 65, 229, 42, 219, 57, 168, 226, 152, 142, 84, 79, 230, 38, 138, 84, 154, 107, 163, 51, 213, 22, 247, 198, 154, 244, 217, 166, 5, 178, 69, 100, 163, 173, 4, 86, 138, 183, 174, 220, 78, 175, 137, 117, 50, 246, 227, 30, 83, 218, 37, 164, 128, 92, 208, 27, 134, 162, 247, 80, 202, 143, 205, 32, 74, 129, 45, 166, 198, 46, 122, 92, 143, 229, 214, 182, 132, 64, 43, 192, 239, 83, 64, 164, 237, 232, 180, 224, 58, 233, 43, 16, 44, 224, 77, 110, 215, 255, 252, 208, 66, 121, 89, 104, 200, 20, 193, 243, 100, 18, 196, 125, 222, 73, 76, 161, 225, 133, 26, 93, 215, 198, 222, 80, 21, 195, 51, 209, 111, 169, 41, 51, 98, 12, 227, 95, 128, 5, 197, 169, 171, 140, 117, 220, 144, 72, 126, 102, 127, 100, 235, 86, 246, 242, 22, 0, 114, 162, 197, 82, 207, 39, 240, 155, 118, 70, 201, 123, 188, 53, 216, 192, 100, 254, 29, 97, 2, 40, 16, 121, 177, 28, 24, 0, 162, 231, 10, 195, 45, 65, 234, 190, 122, 169, 9, 241, 143, 158, 23, 32, 118, 91, 239, 183, 53, 243, 67, 117, 155, 94, 166, 4, 178, 229, 103, 190, 161, 161, 54, 239, 10, 105, 175, 169, 121, 166, 93, 52, 125, 174, 139, 204, 117, 200, 232, 252, 15, 239, 14, 88, 209, 3, 201, 199, 31, 51, 162, 190, 140, 168, 201, 58, 146, 126, 229, 152, 129, 237, 86, 253, 22, 125, 243, 193, 131, 37, 228, 27, 136, 104, 69, 121, 174, 199, 2, 91, 60, 189, 23, 28, 50, 51, 53, 235, 37, 118, 35, 169, 61, 108, 192, 237, 166, 84, 61, 13, 204, 92, 125, 4, 64, 139, 75, 147, 151, 153, 82, 15, 186, 112, 196, 109, 127, 100, 249, 104, 68, 17, 149, 147, 133, 199, 189, 231, 150, 155, 23, 41, 120, 110, 234, 179, 132, 23, 153, 9, 64, 76, 134, 96, 12, 244, 57, 242, 173, 219, 101, 15, 177, 5, 74, 132, 29, 87, 6, 41, 94, 221, 16, 131, 132, 181, 221, 135, 129, 217, 215, 56, 251, 174, 120, 9, 209, 76, 242, 58, 107, 97, 56, 237, 75, 36, 174, 67, 254, 72, 9, 130, 97, 228, 144, 88, 144, 163, 218, 21, 141, 71, 190, 219, 137, 233, 206, 185, 61, 209, 217, 57, 39, 185, 135, 115, 152, 15, 2, 116, 54, 254, 222, 85, 111, 187, 176, 158, 16, 202, 36, 121, 22, 154, 175, 180, 72, 253, 177, 9, 173, 142, 229, 169, 254, 56, 31, 138, 73, 215, 213, 16, 222, 11, 89, 87, 14, 222, 78, 66, 169, 0, 250, 227, 36, 86, 96, 119, 36, 65, 76, 11, 101, 81, 154, 65, 24, 9, 14, 115, 127, 27, 58, 118, 195, 127, 188, 0, 108, 150, 236, 160, 224, 106, 66, 242, 209, 110, 239, 69, 144, 205, 46, 32, 64, 23, 148, 188, 199, 94, 41, 31, 88, 219, 192, 111, 33, 220, 198, 213, 105, 236, 28, 123, 118, 130, 120, 177, 225, 144, 238, 128, 159, 147, 21, 233, 70, 33, 13, 184, 100, 104, 202, 157, 188, 174, 62, 123, 87, 201, 175, 243, 195, 175, 38, 136, 67, 1, 177, 162, 118, 15, 75, 244, 16, 75, 27, 140, 219, 122, 161, 51, 181, 93, 94, 138, 53, 252, 147, 141, 58, 240, 124, 21, 130, 102, 2, 164, 95, 98, 239, 111, 31, 157, 192, 196, 136, 23, 178, 237, 30, 198, 188, 200, 17, 156, 127, 50, 77, 196, 243, 244, 42, 94, 152, 126, 245, 220, 185, 229, 62, 220, 253, 232, 165, 79, 1, 181, 80, 94, 182, 185, 78, 22, 61, 32, 78, 97, 179, 228, 80, 89, 102, 165, 121, 19, 24, 24, 28, 25, 22, 135, 43, 114, 254, 168, 42, 228, 86, 219, 17, 132, 195, 142, 124, 239, 147, 16, 196, 114, 94, 210, 88, 50, 12, 254, 115, 199, 169, 249, 180, 13, 117, 97, 0, 251, 9, 93, 52, 1, 182, 1, 15, 81, 39, 29, 219, 118, 118, 253, 72, 191, 227, 105, 53, 94, 11, 110, 31, 72, 26, 159, 41, 181, 190, 237, 235, 32, 43, 242, 106, 44, 200, 26, 7, 245, 17, 109, 205, };

static Filtc Filter_Kern[9] = { 1, 0, -1, 0, 0, 0, -1, 0, 1, };

static Pixel Gold_Out_Img[4096] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 16, 0, 245, 0, 33, 255, 0, 0, 0, 0, 73, 236, 142, 0, 0, 122, 0, 0, 255, 202, 0, 133, 28, 0, 0, 20, 58, 12, 74, 40, 0, 0, 212, 105, 0, 111, 0, 0, 172, 0, 0, 0, 0, 186, 206, 0, 0, 0, 0, 115, 0, 25, 242, 0, 47, 0, 0, 0, 0, 0, 147, 0, 0, 0, 20, 189, 137, 0, 0, 98, 130, 0, 70, 153, 0, 0, 255, 0, 0, 215, 0, 0, 95, 199, 89, 0, 0, 0, 0, 218, 234, 0, 0, 104, 181, 162, 0, 0, 10, 98, 190, 55, 0, 0, 0, 0, 255, 0, 0, 139, 98, 0, 0, 68, 255, 0, 0, 191, 0, 0, 27, 0, 0, 172, 117, 77, 0, 0, 80, 199, 0, 0, 142, 0, 0, 0, 0, 255, 54, 0, 0, 0, 69, 19, 255, 203, 0, 20, 235, 0, 0, 208, 31, 0, 22, 201, 0, 0, 166, 165, 0, 0, 19, 14, 7, 0, 0, 196, 212, 77, 0, 0, 0, 158, 69, 0, 57, 0, 27, 41, 0, 0, 0, 178, 28, 0, 0, 0, 0, 117, 128, 224, 0, 0, 0, 107, 255, 0, 0, 255, 0, 0, 124, 0, 0, 194, 124, 0, 89, 255, 0, 0, 72, 35, 0, 0, 255, 20, 0, 0, 54, 102, 0, 0, 190, 255, 0, 0, 229, 0, 0, 90, 65, 0, 4, 62, 176, 4, 0, 0, 11, 0, 0, 89, 0, 9, 125, 182, 0, 0, 0, 0, 0, 115, 255, 111, 54, 0, 50, 143, 0, 0, 0, 230, 198, 16, 131, 0, 0, 227, 0, 152, 0, 0, 89, 0, 118, 127, 0, 33, 0, 0, 39, 150, 0, 157, 0, 0, 0, 124, 198, 0, 0, 126, 21, 0, 0, 0, 0, 87, 211, 0, 55, 0, 0, 124, 16, 7, 0, 45, 0, 0, 225, 0, 0, 0, 181, 0, 0, 0, 0, 213, 251, 0, 0, 255, 0, 0, 0, 0, 0, 0, 255, 110, 0, 0, 0, 0, 0, 161, 221, 0, 0, 255, 54, 0, 62, 13, 0, 58, 0, 77, 0, 0, 133, 145, 0, 0, 99, 82, 0, 0, 0, 255, 122, 0, 173, 220, 0, 0, 34, 0, 0, 170, 88, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 134, 0, 160, 255, 0, 0, 96, 0, 147, 67, 0, 0, 0, 48, 0, 107, 154, 0, 0, 62, 0, 54, 255, 0, 0, 122, 147, 60, 0, 0, 0, 0, 134, 0, 81, 0, 0, 0, 15, 255, 202, 0, 0, 0, 90, 8, 0, 60, 54, 5, 255, 40, 0, 0, 0, 0, 255, 0, 0, 0, 205, 0, 0, 0, 250, 11, 0, 186, 148, 61, 0, 0, 246, 0, 0, 0, 255, 150, 0, 0, 0, 0, 34, 255, 0, 0, 55, 186, 171, 0, 0, 0, 0, 123, 44, 37, 110, 0, 113, 2, 0, 54, 156, 239, 0, 0, 255, 0, 0, 255, 65, 0, 0, 95, 0, 0, 0, 176, 0, 0, 0, 0, 180, 103, 0, 84, 187, 0, 0, 126, 166, 0, 120, 102, 0, 0, 157, 35, 0, 25, 65, 0, 100, 0, 0, 188, 0, 9, 195, 0, 0, 90, 164, 0, 0, 39, 158, 168, 1, 0, 0, 0, 0, 0, 66, 71, 0, 0, 1, 193, 10, 0, 0, 134, 126, 7, 0, 0, 0, 78, 172, 0, 0, 0, 0, 0, 255, 215, 0, 82, 255, 0, 0, 114, 177, 19, 0, 0, 205, 128, 0, 0, 68, 0, 0, 0, 0, 161, 159, 0, 29, 34, 46, 151, 6, 0, 0, 221, 183, 20, 0, 0, 71, 0, 0, 184, 143, 78, 0, 0, 45, 0, 154, 150, 0, 242, 0, 0, 0, 68, 219, 37, 0, 0, 0, 25, 0, 0, 97, 76, 0, 0, 189, 117, 0, 0, 176, 162, 0, 12, 100, 96, 51, 0, 0, 0, 0, 50, 135, 52, 0, 0, 216, 0, 50, 63, 0, 0, 54, 194, 0, 0, 183, 0, 0, 0, 148, 3, 17, 255, 31, 0, 0, 0, 78, 0, 0, 0, 148, 134, 0, 0, 118, 0, 0, 115, 197, 0, 0, 189, 0, 0, 53, 87, 0, 0, 0, 0, 43, 0, 0, 0, 190, 88, 0, 0, 22, 48, 0, 0, 35, 131, 97, 245, 217, 0, 0, 0, 51, 0, 0, 11, 0, 0, 153, 72, 0, 12, 34, 100, 113, 0, 25, 0, 0, 0, 169, 18, 0, 255, 0, 0, 0, 0, 120, 0, 59, 255, 22, 0, 0, 174, 163, 0, 0, 0, 0, 0, 133, 245, 0, 0, 0, 255, 0, 0, 111, 255, 0, 0, 200, 0, 0, 173, 132, 72, 0, 0, 161, 162, 0, 0, 0, 134, 58, 47, 77, 0, 166, 186, 0, 0, 47, 0, 0, 103, 72, 0, 90, 162, 0, 0, 124, 0, 0, 0, 0, 121, 43, 0, 22, 80, 24, 200, 0, 0, 185, 0, 0, 0, 0, 0, 0, 7, 255, 31, 0, 39, 255, 0, 0, 0, 255, 106, 0, 0, 28, 82, 205, 0, 0, 0, 0, 0, 120, 40, 15, 84, 134, 52, 64, 48, 0, 0, 0, 0, 185, 98, 0, 10, 0, 0, 35, 139, 154, 0, 0, 15, 114, 0, 0, 222, 231, 140, 0, 0, 0, 115, 165, 0, 0, 189, 0, 0, 0, 89, 16, 0, 0, 255, 59, 0, 7, 131, 101, 0, 29, 147, 0, 0, 0, 125, 166, 0, 0, 38, 0, 21, 136, 88, 35, 0, 163, 150, 0, 46, 54, 152, 0, 0, 0, 24, 5, 100, 43, 0, 0, 0, 255, 251, 0, 61, 194, 0, 0, 0, 168, 80, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 36, 42, 0, 0, 82, 85, 93, 66, 17, 104, 0, 0, 0, 0, 55, 0, 255, 255, 0, 57, 0, 0, 25, 6, 85, 5, 75, 0, 0, 136, 0, 0, 184, 175, 0, 0, 0, 0, 0, 0, 177, 199, 0, 0, 28, 77, 65, 0, 0, 255, 255, 0, 0, 112, 183, 0, 153, 0, 0, 48, 112, 56, 0, 0, 255, 0, 0, 143, 56, 0, 0, 0, 98, 163, 0, 59, 88, 0, 0, 34, 147, 0, 0, 0, 93, 68, 0, 0, 0, 217, 28, 83, 0, 0, 103, 62, 0, 0, 0, 246, 255, 45, 0, 0, 0, 255, 32, 0, 0, 0, 103, 0, 0, 119, 192, 0, 0, 175, 0, 0, 95, 0, 181, 146, 0, 196, 0, 0, 218, 120, 139, 0, 0, 0, 0, 28, 35, 0, 0, 161, 255, 0, 0, 196, 0, 0, 131, 63, 24, 0, 61, 255, 0, 0, 7, 0, 0, 0, 0, 102, 73, 0, 10, 162, 102, 0, 0, 241, 0, 0, 197, 61, 0, 45, 180, 182, 21, 0, 0, 131, 178, 0, 0, 0, 52, 188, 74, 0, 0, 0, 0, 0, 0, 0, 0, 8, 3, 0, 255, 103, 0, 0, 0, 12, 0, 0, 41, 134, 111, 0, 0, 238, 0, 0, 135, 110, 0, 0, 51, 73, 0, 0, 0, 218, 213, 0, 28, 0, 0, 0, 189, 143, 49, 0, 73, 0, 0, 255, 0, 30, 0, 0, 156, 186, 0, 0, 195, 0, 0, 237, 0, 0, 255, 0, 0, 0, 0, 0, 0, 163, 0, 0, 149, 0, 0, 229, 255, 2, 0, 58, 255, 0, 0, 241, 0, 0, 107, 0, 50, 4, 0, 151, 1, 0, 0, 0, 167, 0, 0, 83, 255, 0, 0, 0, 194, 0, 0, 0, 39, 201, 0, 0, 0, 0, 50, 255, 0, 0, 8, 0, 0, 84, 73, 0, 127, 51, 0, 0, 0, 0, 0, 207, 171, 213, 0, 0, 0, 29, 46, 0, 19, 0, 236, 79, 0, 0, 0, 222, 176, 0, 0, 102, 0, 0, 226, 72, 0, 0, 77, 255, 38, 0, 0, 116, 0, 0, 234, 0, 0, 0, 36, 0, 0, 132, 255, 0, 0, 0, 0, 214, 91, 0, 0, 0, 0, 104, 255, 0, 0, 6, 144, 0, 0, 0, 0, 0, 255, 0, 0, 96, 13, 37, 151, 41, 0, 0, 211, 218, 0, 0, 225, 90, 144, 15, 0, 185, 56, 0, 196, 6, 0, 0, 50, 126, 0, 4, 61, 0, 0, 0, 60, 26, 0, 0, 0, 255, 196, 0, 0, 100, 54, 0, 0, 39, 137, 0, 31, 244, 0, 0, 0, 131, 0, 0, 155, 65, 0, 0, 0, 132, 0, 0, 255, 239, 18, 0, 0, 255, 0, 3, 31, 0, 91, 5, 49, 18, 0, 77, 0, 32, 138, 0, 0, 0, 227, 255, 0, 0, 0, 0, 0, 0, 173, 115, 0, 114, 4, 11, 0, 35, 89, 0, 58, 0, 96, 105, 9, 0, 0, 22, 116, 90, 57, 44, 0, 0, 239, 39, 0, 72, 0, 0, 84, 0, 0, 0, 135, 189, 5, 0, 0, 0, 71, 206, 0, 0, 248, 255, 0, 0, 162, 209, 208, 0, 0, 76, 0, 78, 8, 93, 86, 0, 32, 166, 140, 202, 0, 0, 0, 83, 231, 0, 0, 0, 0, 31, 0, 0, 24, 201, 73, 0, 124, 143, 26, 0, 0, 106, 0, 0, 157, 27, 30, 0, 0, 0, 45, 0, 0, 94, 187, 0, 0, 58, 0, 0, 189, 9, 0, 226, 0, 67, 0, 0, 180, 92, 0, 0, 0, 126, 0, 95, 0, 0, 31, 0, 255, 102, 0, 218, 0, 0, 235, 0, 0, 0, 255, 93, 94, 38, 0, 79, 0, 0, 59, 112, 133, 0, 0, 0, 78, 0, 0, 98, 9, 86, 119, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 119, 107, 0, 140, 0, 0, 0, 0, 196, 0, 0, 100, 123, 88, 164, 183, 0, 0, 0, 32, 0, 0, 0, 0, 0, 22, 238, 15, 0, 0, 0, 255, 118, 0, 0, 0, 0, 157, 15, 0, 9, 91, 0, 0, 236, 89, 0, 251, 0, 0, 249, 86, 0, 0, 0, 0, 0, 135, 98, 0, 32, 0, 138, 162, 0, 0, 73, 28, 0, 7, 85, 183, 0, 0, 76, 255, 0, 0, 203, 0, 31, 151, 0, 0, 237, 0, 0, 255, 0, 0, 0, 0, 42, 214, 0, 0, 0, 0, 195, 0, 0, 73, 185, 0, 0, 0, 0, 60, 82, 49, 0, 229, 0, 0, 0, 152, 102, 0, 0, 255, 0, 0, 0, 129, 154, 0, 170, 126, 0, 0, 203, 42, 0, 0, 0, 3, 0, 0, 72, 0, 157, 37, 0, 0, 3, 5, 16, 0, 24, 147, 1, 94, 0, 0, 78, 132, 0, 0, 48, 0, 0, 0, 12, 255, 255, 0, 0, 255, 0, 0, 159, 126, 0, 0, 2, 0, 103, 255, 0, 0, 45, 0, 0, 0, 43, 0, 0, 0, 34, 124, 91, 11, 0, 0, 32, 209, 0, 0, 0, 0, 255, 169, 0, 0, 181, 90, 0, 205, 233, 0, 0, 144, 0, 0, 0, 0, 75, 255, 55, 0, 0, 0, 178, 94, 0, 116, 0, 69, 98, 0, 0, 100, 0, 0, 23, 0, 59, 0, 47, 0, 184, 134, 0, 0, 127, 0, 0, 0, 62, 89, 44, 155, 0, 104, 56, 0, 0, 45, 0, 112, 208, 0, 0, 35, 96, 180, 0, 0, 58, 0, 16, 96, 0, 0, 38, 0, 0, 0, 0, 85, 117, 82, 0, 0, 0, 255, 210, 0, 0, 236, 132, 0, 0, 45, 0, 0, 8, 0, 0, 41, 255, 255, 0, 0, 0, 0, 21, 89, 0, 0, 0, 95, 143, 125, 0, 20, 0, 36, 0, 0, 19, 0, 0, 0, 255, 0, 17, 125, 0, 0, 48, 112, 2, 149, 255, 0, 0, 39, 134, 0, 0, 64, 186, 48, 0, 0, 18, 255, 172, 0, 0, 0, 28, 0, 0, 0, 228, 156, 0, 0, 200, 12, 0, 0, 0, 155, 64, 0, 54, 18, 85, 29, 0, 0, 0, 0, 0, 99, 148, 0, 0, 40, 0, 177, 137, 134, 114, 0, 0, 97, 220, 0, 0, 21, 203, 0, 0, 133, 0, 0, 206, 0, 0, 142, 255, 0, 0, 0, 0, 0, 159, 255, 0, 0, 0, 101, 143, 10, 0, 0, 0, 0, 242, 115, 0, 0, 15, 209, 0, 0, 255, 0, 0, 255, 79, 0, 203, 0, 0, 227, 0, 0, 40, 0, 0, 134, 112, 63, 168, 92, 0, 0, 8, 221, 0, 0, 68, 0, 55, 255, 0, 0, 0, 71, 0, 0, 34, 80, 152, 24, 11, 0, 0, 82, 94, 0, 0, 103, 196, 0, 17, 40, 0, 118, 0, 0, 163, 0, 0, 0, 199, 255, 0, 0, 33, 0, 0, 160, 123, 0, 183, 0, 0, 134, 255, 0, 0, 71, 0, 0, 0, 197, 108, 0, 0, 170, 255, 0, 0, 255, 0, 0, 0, 0, 84, 0, 0, 127, 0, 42, 37, 0, 0, 101, 20, 86, 221, 0, 0, 0, 255, 214, 97, 0, 5, 0, 0, 91, 7, 213, 48, 0, 0, 171, 0, 3, 124, 0, 0, 252, 137, 0, 130, 13, 0, 0, 0, 62, 0, 10, 0, 82, 196, 14, 0, 0, 0, 202, 142, 102, 44, 0, 0, 0, 149, 236, 0, 0, 205, 255, 0, 0, 180, 53, 71, 0, 0, 0, 0, 161, 146, 42, 0, 17, 222, 0, 0, 17, 131, 0, 110, 0, 6, 0, 0, 181, 0, 100, 0, 0, 253, 160, 0, 0, 90, 0, 0, 0, 2, 0, 0, 0, 0, 173, 163, 0, 15, 0, 0, 0, 31, 114, 0, 0, 0, 0, 201, 56, 0, 0, 21, 141, 0, 0, 123, 0, 4, 170, 0, 0, 107, 23, 0, 0, 0, 0, 65, 58, 0, 5, 36, 255, 0, 0, 119, 0, 32, 0, 0, 76, 162, 136, 0, 0, 0, 0, 35, 0, 9, 179, 0, 197, 255, 0, 0, 0, 60, 44, 0, 93, 0, 0, 230, 246, 0, 0, 0, 128, 78, 0, 0, 87, 0, 0, 126, 141, 0, 0, 255, 0, 0, 111, 0, 0, 139, 173, 38, 0, 0, 0, 255, 89, 0, 61, 0, 41, 0, 0, 231, 15, 0, 106, 15, 207, 77, 0, 96, 10, 0, 0, 190, 51, 0, 0, 0, 0, 0, 0, 0, 14, 176, 55, 0, 1, 180, 0, 0, 47, 0, 22, 42, 0, 115, 255, 0, 0, 15, 71, 0, 57, 0, 31, 0, 0, 89, 0, 91, 188, 0, 0, 54, 0, 0, 182, 175, 0, 0, 0, 0, 0, 84, 255, 0, 0, 153, 183, 0, 0, 0, 0, 255, 98, 0, 0, 0, 51, 0, 0, 23, 39, 9, 0, 0, 0, 0, 0, 207, 0, 0, 243, 0, 0, 28, 0, 228, 65, 0, 221, 162, 0, 0, 85, 80, 0, 10, 0, 0, 179, 108, 0, 255, 24, 0, 0, 16, 0, 35, 38, 0, 0, 255, 0, 122, 117, 0, 201, 0, 45, 206, 0, 0, 15, 0, 0, 105, 168, 83, 0, 0, 0, 0, 0, 141, 170, 0, 0, 0, 83, 0, 0, 0, 113, 78, 33, 0, 35, 70, 11, 34, 129, 0, 0, 63, 16, 64, 76, 0, 0, 53, 19, 92, 0, 0, 255, 0, 0, 0, 165, 143, 0, 15, 0, 0, 97, 255, 0, 0, 237, 255, 0, 0, 46, 0, 0, 232, 122, 62, 0, 0, 0, 51, 89, 8, 154, 218, 0, 0, 0, 0, 0, 0, 255, 0, 43, 0, 0, 207, 0, 0, 199, 184, 21, 0, 0, 255, 167, 12, 75, 0, 0, 82, 21, 0, 46, 197, 0, 0, 0, 0, 99, 249, 0, 0, 0, 0, 255, 119, 0, 0, 0, 0, 0, 88, 189, 89, 0, 70, 255, 0, 0, 38, 46, 0, 3, 42, 0, 71, 0, 0, 238, 0, 0, 231, 0, 0, 40, 0, 66, 255, 0, 0, 197, 125, 0, 0, 0, 211, 28, 0, 0, 42, 152, 68, 0, 0, 0, 21, 205, 0, 0, 0, 29, 0, 87, 131, 0, 0, 84, 65, 0, 24, 0, 0, 255, 71, 0, 0, 255, 0, 0, 255, 0, 0, 255, 0, 0, 94, 0, 182, 85, 0, 0, 0, 180, 156, 0, 227, 0, 0, 0, 99, 27, 67, 9, 0, 0, 112, 27, 0, 0, 159, 193, 27, 0, 0, 17, 211, 57, 86, 0, 27, 2, 28, 0, 0, 100, 0, 65, 0, 37, 0, 35, 59, 0, 0, 32, 0, 26, 0, 149, 35, 0, 82, 108, 24, 0, 54, 155, 54, 121, 0, 0, 0, 0, 0, 227, 148, 0, 0, 0, 82, 0, 0, 0, 102, 235, 0, 0, 255, 0, 0, 27, 0, 255, 0, 0, 255, 222, 0, 0, 0, 0, 255, 255, 0, 0, 0, 79, 92, 28, 79, 0, 9, 47, 0, 0, 0, 234, 213, 0, 0, 29, 97, 172, 76, 0, 208, 244, 0, 26, 197, 0, 39, 0, 0, 241, 0, 0, 255, 3, 0, 0, 0, 88, 0, 0, 0, 183, 2, 0, 58, 0, 13, 79, 0, 0, 58, 173, 0, 0, 0, 0, 0, 193, 240, 0, 0, 51, 189, 0, 0, 141, 0, 74, 126, 0, 100, 233, 29, 0, 0, 0, 0, 226, 161, 0, 0, 0, 0, 0, 163, 98, 0, 115, 17, 0, 5, 0, 39, 122, 145, 224, 0, 0, 154, 0, 0, 0, 0, 0, 0, 41, 0, 0, 203, 193, 0, 191, 101, 0, 0, 0, 154, 18, 0, 0, 0, 69, 247, 255, 0, 0, 237, 9, 213, 61, 0, 0, 2, 51, 136, 0, 0, 113, 185, 0, 0, 218, 91, 0, 41, 0, 0, 146, 0, 0, 61, 197, 3, 0, 0, 219, 165, 0, 0, 106, 27, 2, 92, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 88, 139, 111, 21, 0, 45, 0, 0, 0, 0, 234, 255, 0, 0, 153, 255, 52, 0, 0, 204, 85, 0, 0, 0, 34, 0, 0, 42, 27, 158, 111, 0, 0, 17, 179, 5, 0, 106, 255, 0, 0, 129, 28, 31, 32, 0, 137, 133, 0, 0, 0, 0, 0, 0, 255, 109, 18, 27, 0, 0, 0, 0, 57, 210, 0, 0, 22, 0, 116, 69, 0, 0, 191, 0, 0, 150, 0, 0, 19, 0, 185, 0, 0, 0, 63, 255, 0, 0, 92, 0, 179, 0, 0, 0, 96, 255, 0, 0, 0, 0, 169, 202, 0, 0, 0, 0, 0, 133, 40, 32, 93, 0, 0, 140, 108, 0, 0, 0, 0, 255, 37, 0, 0, 0, 0, 0, 104, 175, 0, 0, 0, 145, 203, 0, 0, 55, 42, 15, 0, 0, 110, 121, 0, 0, 0, 255, 128, 0, 0, 82, 22, 168, 44, 62, 182, 0, 0, 113, 184, 5, 0, 0, 14, 0, 0, 202, 28, 0, 0, 0, 71, 0, 0, 243, 94, 0, 120, 0, 0, 144, 149, 0, 0, 0, 134, 40, 0, 0, 0, 190, 222, 0, 0, 200, 0, 32, 0, 86, 144, 0, 0, 0, 29, 244, 0, 0, 29, 255, 0, 0, 110, 78, 82, 0, 63, 19, 19, 0, 0, 0, 73, 205, 0, 0, 48, 59, 199, 34, 0, 0, 0, 127, 93, 0, 58, 0, 0, 16, 17, 116, 0, 126, 28, 0, 27, 116, 255, 0, 0, 176, 0, 0, 163, 97, 0, 0, 180, 0, 0, 25, 0, 0, 0, 82, 65, 65, 133, 99, 0, 0, 36, 33, 0, 0, 0, 24, 166, 0, 2, 0, 127, 0, 0, 55, 46, 41, 56, 2, 34, 0, 0, 255, 0, 0, 0, 37, 30, 43, 0, 33, 255, 0, 0, 0, 0, 163, 0, 0, 25, 54, 79, 6, 0, 81, 0, 0, 151, 0, 0, 184, 23, 0, 0, 41, 0, 100, 29, 0, 0, 255, 49, 0, 186, 76, 0, 0, 80, 51, 116, 179, 0, 0, 177, 0, 0, 0, 0, 255, 25, 0, 121, 190, 0, 0, 0, 120, 12, 0, 179, 0, 0, 255, 0, 0, 181, 0, 0, 82, 35, 0, 0, 0, 43, 154, 0, 0, 160, 112, 0, 0, 0, 0, 87, 67, 0, 0, 255, 0, 0, 255, 255, 22, 0, 0, 0, 0, 0, 222, 0, 0, 255, 0, 0, 188, 82, 13, 0, 0, 15, 144, 89, 0, 25, 40, 0, 0, 0, 0, 5, 0, 185, 24, 0, 0, 0, 67, 0, 180, 0, 0, 0, 137, 227, 0, 12, 38, 34, 11, 0, 0, 86, 0, 0, 0, 0, 104, 110, 0, 0, 255, 150, 19, 0, 0, 0, 192, 203, 0, 0, 47, 16, 83, 0, 0, 197, 0, 0, 0, 59, 117, 0, 60, 135, 70, 0, 0, 37, 212, 96, 0, 46, 80, 0, 186, 236, 19, 0, 0, 35, 0, 37, 0, 0, 74, 0, 50, 139, 0, 178, 103, 0, 0, 86, 186, 0, 0, 0, 0, 0, 180, 0, 0, 255, 0, 0, 132, 178, 0, 0, 0, 0, 218, 209, 0, 47, 0, 80, 122, 0, 0, 212, 0, 0, 169, 0, 138, 108, 0, 0, 255, 179, 0, 0, 54, 8, 146, 0, 53, 12, 0, 125, 27, 134, 0, 0, 92, 0, 0, 0, 28, 0, 0, 106, 0, 0, 78, 226, 0, 0, 57, 0, 0, 0, 16, 0, 227, 255, 0, 0, 0, 131, 16, 0, 98, 13, 96, 0, 0, 0, 156, 149, 0, 0, 55, 73, 82, 165, 103, 63, 0, 0, 0, 190, 163, 25, 0, 0, 255, 40, 0, 43, 0, 5, 96, 73, 169, 0, 0, 7, 0, 12, 2, 10, 0, 0, 84, 0, 7, 112, 0, 90, 59, 110, 0, 0, 0, 37, 58, 6, 35, 0, 120, 124, 0, 63, 9, 0, 5, 68, 56, 58, 0, 0, 138, 54, 0, 0, 125, 95, 87, 0, 0, 203, 0, 0, 255, 215, 0, 0, 0, 61, 0, 250, 74, 0, 16, 5, 180, 0, 0, 42, 152, 226, 0, 0, 112, 231, 0, 0, 15, 0, 116, 131, 0, 0, 241, 60, 0, 0, 0, 9, 0, 105, 93, 0, 33, 17, 0, 50, 26, 199, 37, 0, 0, 255, 170, 42, 0, 0, 99, 7, 47, 0, 142, 18, 0, 67, 174, 0, 0, 36, 46, 30, 94, 0, 0, 78, 223, 164, 59, 0, 25, 0, 0, 44, 0, 211, 191, 0, 0, 0, 0, 158, 0, 15, 39, 47, 29, 0, 0, 0, 147, 0, 0, 0, 0, 0, 62, 255, 37, 0, 34, 0, 182, 54, 16, 0, 0, 0, 206, 100, 0, 0, 0, 182, 235, 0, 0, 120, 0, 18, 33, 0, 0, 0, 51, 183, 186, 0, 0, 0, 28, 255, 5, 0, 0, 104, 255, 0, 0, 0, 0, 27, 90, 0, 0, 189, 182, 0, 0, 0, 0, 5, 0, 134, 194, 0, 0, 255, 255, 0, 6, 123, 0, 117, 24, 0, 0, 0, 0, 211, 131, 0, 0, 0, 189, 0, 90, 242, 0, 0, 0, 203, 44, 0, 0, 255, 196, 0, 0, 0, 0, 155, 136, 0, 0, 37, 0, 88, 0, 104, 199, 0, 81, 0, 0, 218, 2, 0, 63, 0, 6, 187, 101, 6, 4, 0, 2, 255, 0, 0, 0, 18, 0, 12, 120, 0, 0, 234, 235, 0, 0, 0, 117, 159, 173, 0, 0, 0, 0, 45, 255, 0, 0, 0, 0, 143, 174, 0, 200, 255, 0, 0, 0, 0, 0, 159, 255, 194, 0, 0, 0, 184, 178, 0, 0, 12, 97, 0, 71, 223, 0, 0, 209, 7, 0, 93, 31, 7, 10, 0, 255, 0, 0, 0, 0, 0, 0, 178, 0, 43, 8, 0, 50, 255, 78, 0, 0, 8, 0, 0, 94, 123, 0, 255, 0, 0, 102, 55, 173, 0, 0, 249, 13, 0, 0, 107, 0, 206, 0, 0, 242, 0, 0, 0, 0, 127, 109, 0, 0, 255, 9, 0, 255, 0, 0, 0, 0, 197, 255, 0, 0, 0, 0, 255, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif