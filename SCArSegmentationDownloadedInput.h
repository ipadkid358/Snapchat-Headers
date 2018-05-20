/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGeofilterDependencyValidation.h>

@class SCArSegmentationDownloadedSky, SCArSegmentationDownloadedPortrait;

@interface SCArSegmentationDownloadedInput : NSObject <SCGeofilterDependencyValidation> {

	SCArSegmentationDownloadedSky* _sky;
	SCArSegmentationDownloadedPortrait* _portrait;

}

@property (nonatomic,retain) SCArSegmentationDownloadedSky * sky;                        //@synthesize sky=_sky - In the implementation block
@property (nonatomic,retain) SCArSegmentationDownloadedPortrait * portrait;              //@synthesize portrait=_portrait - In the implementation block
-(SCArSegmentationDownloadedSky *)sky;
-(SCArSegmentationDownloadedPortrait *)portrait;
-(void)setSky:(SCArSegmentationDownloadedSky *)arg1 ;
-(id)validationErrors;
-(unsigned long long)detectionType;
-(void)setPortrait:(SCArSegmentationDownloadedPortrait *)arg1 ;
@end

