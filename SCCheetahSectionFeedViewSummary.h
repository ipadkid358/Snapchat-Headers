/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface SCCheetahSectionFeedViewSummary : NSObject {

	NSString* _section;
	NSMutableSet* _uniqueItemsShown;
	NSMutableSet* _uniqueItemsTapped;
	NSMutableSet* _uniqueItemsAvailable;

}
-(void)itemsAvailable:(id)arg1 ;
-(void)itemShown:(id)arg1 ;
-(void)itemTapped:(id)arg1 ;
-(id)feedViewDidEnd;
-(id)initWithSection:(id)arg1 ;
@end

