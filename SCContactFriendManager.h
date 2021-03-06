/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCQueuePerformer, NSSet;

@interface SCContactFriendManager : NSObject {

	SCQueuePerformer* _updateQueuePerformer;
	NSSet* _contactSnapchatters;

}

@property (retain) NSSet * contactSnapchatters;              //@synthesize contactSnapchatters=_contactSnapchatters - In the implementation block
-(NSSet *)contactSnapchatters;
-(BOOL)isContactOnSnapchat:(id)arg1 ;
-(void)_updateContactSnapchatters;
-(void)setContactSnapchatters:(NSSet *)arg1 ;
-(BOOL)isNonFriendContactOnSnapchat:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

