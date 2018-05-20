/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming, SCStoryExporterDelegate;
@class SCSpectaclesExportSettings, NSString, NSArray, NSMutableArray, NSTimer, AVAssetExportSession;

@interface SCStoryExporter : NSObject {

	id<SCPerforming> _performer;
	SCSpectaclesExportSettings* _spectaclesExportSettings;
	BOOL _processingStarted;
	id<SCStoryExporterDelegate> _delegate;
	NSString* _exporterTag;
	unsigned long long _backgroundTaskId;
	NSArray* _stories;
	NSMutableArray* _urls;
	NSTimer* _exportProgressTimer;
	AVAssetExportSession* _exportSession;

}

@property (assign,nonatomic) unsigned long long backgroundTaskId;                      //@synthesize backgroundTaskId=_backgroundTaskId - In the implementation block
@property (nonatomic,copy) NSArray * stories;                                          //@synthesize stories=_stories - In the implementation block
@property (nonatomic,retain) NSMutableArray * urls;                                    //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) NSTimer * exportProgressTimer;                            //@synthesize exportProgressTimer=_exportProgressTimer - In the implementation block
@property (nonatomic,retain) AVAssetExportSession * exportSession;                     //@synthesize exportSession=_exportSession - In the implementation block
@property (assign,nonatomic) BOOL processingStarted;                                   //@synthesize processingStarted=_processingStarted - In the implementation block
@property (assign,nonatomic,__weak) id<SCStoryExporterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * exporterTag;                                     //@synthesize exporterTag=_exporterTag - In the implementation block
-(NSArray *)stories;
-(id)initWithStories:(id)arg1 ;
-(long long)storyCount;
-(void)setStories:(NSArray *)arg1 ;
-(id)generateOutputMovieURL;
-(void)setExporterTag:(NSString *)arg1 ;
-(NSString *)exporterTag;
-(double)storyDuration;
-(BOOL)processingStarted;
-(void)setProcessingStarted:(BOOL)arg1 ;
-(unsigned long long)backgroundTaskId;
-(void)setBackgroundTaskId:(unsigned long long)arg1 ;
-(void)didProceedToProgress:(double)arg1 ;
-(void)exportStoryAtIndex:(long long)arg1 ;
-(void)compositeVideos;
-(void)didFinishExportingToURL:(id)arg1 withError:(id)arg2 ;
-(void)pollExporterProgress:(id)arg1 ;
-(void)setExportProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)exportProgressTimer;
-(id)generateURLWithCustomMetadataFromURL:(id)arg1 ;
-(id)durationInMillisecondsOfStory:(id)arg1 ;
-(id)ssegMetadata;
-(id)init;
-(void)setDelegate:(id<SCStoryExporterDelegate>)arg1 ;
-(id<SCStoryExporterDelegate>)delegate;
-(NSMutableArray *)urls;
-(void)setUrls:(NSMutableArray *)arg1 ;
-(AVAssetExportSession *)exportSession;
-(void)setExportSession:(AVAssetExportSession *)arg1 ;
-(void)startExporting;
@end
