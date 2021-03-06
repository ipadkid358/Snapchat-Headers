/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGalleryActivityItemProvider.h>

@class SCPreviewConfiguration, UIImage, SnapVideoFilter, SCSnapCommonLoggingParameters;

@interface SCGalleryPreviewActivityItemProvider : SCGalleryActivityItemProvider {

	unsigned long long _mediaType;
	SCPreviewConfiguration* _configuration;
	UIImage* _image;
	SnapVideoFilter* _videoFilter;
	SCSnapCommonLoggingParameters* _commonLoggingParams;

}

@property (nonatomic,readonly) unsigned long long mediaType;                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) SCPreviewConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                       //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) SnapVideoFilter * videoFilter;                                         //@synthesize videoFilter=_videoFilter - In the implementation block
@property (nonatomic,copy,readonly) SCSnapCommonLoggingParameters * commonLoggingParams;              //@synthesize commonLoggingParams=_commonLoggingParams - In the implementation block
-(SnapVideoFilter *)videoFilter;
-(id)initWithSnapImage:(id)arg1 withConfiguration:(id)arg2 commonLoggingParams:(id)arg3 ;
-(id)initWithSnapVideoFilter:(id)arg1 withConfiguration:(id)arg2 commonLoggingParams:(id)arg3 ;
-(SCSnapCommonLoggingParameters *)commonLoggingParams;
-(UIImage *)image;
-(SCPreviewConfiguration *)configuration;
-(unsigned long long)mediaType;
@end

