/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCAsynchronousOperation.h>

@class NSMutableDictionary, NSDate, NSMutableArray, NSError, NSArray, SCUserSession, SCQueuePerformer, NSOperationQueue;

@interface SCGallerySnapsFaceAnalysisOperation : SCAsynchronousOperation {

	NSMutableDictionary* _results;
	NSDate* _startDate;
	NSMutableArray* _timeResults;
	BOOL _forceReprocess;
	NSError* _error;
	NSArray* _gallerySnaps;
	SCUserSession* _userSession;
	SCQueuePerformer* _performer;
	NSOperationQueue* _subOperationQueue;
	/*^block*/id _progressBlock;

}

@property (nonatomic,retain) NSArray * gallerySnaps;                            //@synthesize gallerySnaps=_gallerySnaps - In the implementation block
@property (assign,nonatomic) BOOL forceReprocess;                               //@synthesize forceReprocess=_forceReprocess - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;                       //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) SCQueuePerformer * performer;                      //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * subOperationQueue;              //@synthesize subOperationQueue=_subOperationQueue - In the implementation block
@property (nonatomic,copy) id progressBlock;                                    //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(SCQueuePerformer *)performer;
-(void)setPerformer:(SCQueuePerformer *)arg1 ;
-(NSOperationQueue *)subOperationQueue;
-(void)_fetchGallerySnapsToAnalyzeWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)gallerySnaps;
-(void)setGallerySnaps:(NSArray *)arg1 ;
-(BOOL)forceReprocess;
-(id)initWithGallerySnaps:(id)arg1 forceReprocess:(BOOL)arg2 progressBlock:(/*^block*/id)arg3 userSession:(id)arg4 ;
-(void)setForceReprocess:(BOOL)arg1 ;
-(void)setSubOperationQueue:(NSOperationQueue *)arg1 ;
-(void)cancel;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)start;
-(id)results;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

