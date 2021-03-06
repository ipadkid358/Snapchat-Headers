/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, UIColor;

@interface SCTileCoverViewModel : NSObject {

	NSString* _coverId;
	NSString* _headline;
	UIImage* _image;
	NSString* _imageURLString;
	double _cropPercentage;
	UIColor* _color;
	unsigned long long _textJustification;

}

@property (nonatomic,copy,readonly) NSString * coverId;                           //@synthesize coverId=_coverId - In the implementation block
@property (nonatomic,copy,readonly) NSString * headline;                          //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageURLString;                    //@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,readonly) double cropPercentage;                             //@synthesize cropPercentage=_cropPercentage - In the implementation block
@property (nonatomic,readonly) UIColor * color;                                   //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) unsigned long long textJustification;              //@synthesize textJustification=_textJustification - In the implementation block
-(unsigned long long)textJustification;
-(double)cropPercentage;
-(NSString *)coverId;
-(NSString *)imageURLString;
-(id)initWithCoverId:(id)arg1 headline:(id)arg2 image:(id)arg3 imageURLString:(id)arg4 cropPercentage:(double)arg5 color:(id)arg6 textJustification:(unsigned long long)arg7 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)description;
-(UIImage *)image;
-(UIColor *)color;
-(NSString *)headline;
@end

