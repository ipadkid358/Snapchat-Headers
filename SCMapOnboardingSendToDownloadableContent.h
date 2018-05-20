/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDownloadableContent.h>

@interface SCMapOnboardingSendToDownloadableContent : SCDownloadableContent {

	BOOL _rightToLeft;
	double _screenScale;

}

@property (assign,nonatomic) BOOL rightToLeft;                //@synthesize rightToLeft=_rightToLeft - In the implementation block
@property (assign,nonatomic) double screenScale;              //@synthesize screenScale=_screenScale - In the implementation block
+(void)_removeAllContent_TEST_USAGE_ONLY;
+(id)sharedInstanceForScreenScale:(double)arg1 rightToLeft:(BOOL)arg2 ;
-(id)directoryName;
-(id)eventUniqueId;
-(id)initWithScreenScale:(double)arg1 rightToLeft:(BOOL)arg2 ;
-(id)_assetFileName;
-(id)image;
-(void)setScreenScale:(double)arg1 ;
-(double)screenScale;
-(id)resourceName;
-(id)fileNames;
-(BOOL)rightToLeft;
-(void)setRightToLeft:(BOOL)arg1 ;
@end

