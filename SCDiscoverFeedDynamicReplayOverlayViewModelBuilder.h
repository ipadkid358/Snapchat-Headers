/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface SCDiscoverFeedDynamicReplayOverlayViewModelBuilder : NSObject {

	UIImage* _primaryIconImage;
	NSString* _primaryIconSubtitle;
	UIImage* _secondaryIconImage;
	NSString* _secondaryIconSubtitle;
	NSString* _replayOverlayTitle;

}
+(id)discoverFeedDynamicReplayOverlayViewModel;
+(id)discoverFeedDynamicReplayOverlayViewModelFromExistingDiscoverFeedDynamicReplayOverlayViewModel:(id)arg1 ;
-(id)withPrimaryIconImage:(id)arg1 ;
-(id)withPrimaryIconSubtitle:(id)arg1 ;
-(id)withSecondaryIconImage:(id)arg1 ;
-(id)withSecondaryIconSubtitle:(id)arg1 ;
-(id)withReplayOverlayTitle:(id)arg1 ;
-(id)build;
@end

