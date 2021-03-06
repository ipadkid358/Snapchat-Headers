/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCQueuePerformer, SCFideliusUserIdentity, SCEllipticCurveCrypto;

@interface SCFideliusIdentityArchiveManager : NSObject {

	SCQueuePerformer* _performer;
	SCFideliusUserIdentity* _archiveIdentity;
	SCEllipticCurveCrypto* _archiveBeta;
	BOOL _isArchiveUnavailable;

}
+(id)sharedFakePerformer;
+(id)shared;
-(id)initWithPerformer:(id)arg1 ;
-(id)iwek;
-(void)_setArchiveIdentity;
-(id)archiveIdentity;
-(void)_clearInMemoryForTesting;
-(id)archiveBeta;
-(id)init;
-(void)clear;
-(BOOL)save:(id)arg1 ;
@end

