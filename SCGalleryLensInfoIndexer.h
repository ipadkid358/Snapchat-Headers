/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUserSessionScoped.h>

@protocol SCPerforming;
@class SCUserSession, NSMutableSet, EGODatabase, SCEncryptedContentManager, SCCloudFS, EGODatabaseStatement, NSString;

@interface SCGalleryLensInfoIndexer : NSObject <SCUserSessionScoped> {

	SCUserSession* _userSession;
	id<SCPerforming> _performer;
	NSMutableSet* _currentlyEvaluatingSnaps;
	EGODatabase* _database;
	SCEncryptedContentManager* _encryptedContentManager;
	SCCloudFS* _cloudFS;
	EGODatabaseStatement* _queryLensDetectedFaceNumberWithSnapId;
	EGODatabaseStatement* _insertLensDetectedFaceNumberWithSnapId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(id)_databaseURL;
-(void)_evaluateLensDetectedFacesInSnap:(id)arg1 ;
-(long long)_queryLensDetectedFaceNumber:(id)arg1 ;
-(void)evaluateLensDetectedFacesInSnap:(id)arg1 ;
-(long long)queryLensDetectedFaceNumberWithSnapId:(id)arg1 ;
-(void)_setupDatabase;
-(void)invalidate;
@end
