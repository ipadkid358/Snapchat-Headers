/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class NSMutableDictionary;

@interface SCChatMediaReferenceManager : NSObject {

	id<SCPerforming> _performer;
	NSMutableDictionary* _mediaIdReferences;

}
-(void)addReferenceToMediaId:(id)arg1 forMessage:(id)arg2 ;
-(BOOL)_message:(id)arg1 matchesMessage:(id)arg2 ;
-(void)referencesForMediaId:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)removeReferenceToMedia:(id)arg1 forMessage:(id)arg2 ;
-(id)init;
@end

