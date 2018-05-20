/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SCCaptionLogger : NSObject {

	NSMutableArray* _previewedCaptionCarouselStyles;
	long long _userTaggingTapCount;
	long long _userTaggingFromTextInputCount;
	long long _userTaggingFromButtonTapCount;

}
-(id)initWithCaptionStyleName:(id)arg1 ;
-(void)logCaptionCarouselStyleItemTapped:(id)arg1 ;
-(void)logCaptionCarouselUserTaggingItemTapped;
-(void)logUserTaggingFromTextInput;
-(void)logUserTaggingFromButtonTap;
-(void)logCaptionEditingActionFromLoggingParameters:(id)arg1 ;
@end

