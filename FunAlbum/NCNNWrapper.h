//
//  NCNNWrapper.h
//  FunAlbum
//
//  Created by Jinbin Xie on 11/9/18.
//  Copyright © 2018年 Jinbin Xie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NCNNWrapper : NSObject

+(nonnull NSString *)openCVVersionString;
+(nonnull UIImage *)cvtColorBGR2GRAY:(nonnull UIImage *)image;
+(nonnull UIImage *)detectFace: (nonnull UIImage *)rawImage;

@end
