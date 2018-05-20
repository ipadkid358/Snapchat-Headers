/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGeofilterDependencyValidation.h>

@class SOJUContextFilterSkyItem, UIImage;

@interface SCArSegmentationDownloadedSky : NSObject <SCGeofilterDependencyValidation> {

	SOJUContextFilterSkyItem* _metadata;
	UIImage* _replacementSkyImage;
	UIImage* _blimpImage;

}

@property (nonatomic,retain) SOJUContextFilterSkyItem * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) UIImage * replacementSkyImage;                    //@synthesize replacementSkyImage=_replacementSkyImage - In the implementation block
@property (nonatomic,retain) UIImage * blimpImage;                             //@synthesize blimpImage=_blimpImage - In the implementation block
-(void)setReplacementSkyImage:(UIImage *)arg1 ;
-(void)setBlimpImage:(UIImage *)arg1 ;
-(id)validationErrors;
-(UIImage *)replacementSkyImage;
-(UIImage *)blimpImage;
-(SOJUContextFilterSkyItem *)metadata;
-(void)setMetadata:(SOJUContextFilterSkyItem *)arg1 ;
@end
