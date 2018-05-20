/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStoryExporterDelegate.h>

@protocol SCExportMyStoriesManagerDelegate;
@class SCUserSession, NSMutableDictionary, NSString;

@interface SCExportMyStoriesManager : NSObject <SCStoryExporterDelegate> {

	SCUserSession* _userSession;
	NSMutableDictionary* _myStoryExportersDictionary;
	NSMutableDictionary* _storyExporterDictionary;
	NSMutableDictionary* _saveErrorDictionary;
	NSMutableDictionary* _saveGroupDictionary;
	NSMutableDictionary* _savingLoggerSessionDictionary;
	id<SCExportMyStoriesManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCExportMyStoriesManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isMyStoriesSaving:(id)arg1 ;
-(void)handleSaveEntireStory:(id)arg1 ;
-(void)storyExporter:(id)arg1 didFinishExportingToURL:(id)arg2 withError:(id)arg3 ;
-(void)storyExporter:(id)arg1 didProceedToProgress:(double)arg2 ;
-(void)handleSaveEntireStory:(id)arg1 saveToCameraRoll:(BOOL)arg2 saveToMemories:(BOOL)arg3 ;
-(id)_saveGroupForMyStories:(id)arg1 ;
-(void)_clearSaveErrorForMyStories:(id)arg1 ;
-(id)_createSaveGroupForMyStories:(id)arg1 ;
-(void)_exportEntireStory:(id)arg1 ;
-(void)_saveMyStoriesToGallery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_saveErrorForMyStories:(id)arg1 ;
-(void)_clearSaveGroupForMyStories:(id)arg1 ;
-(void)_clearSavingloggerSessionForMyStories:(id)arg1 ;
-(void)_setSaveError:(id)arg1 forMyStories:(id)arg2 ;
-(void)setDelegate:(id<SCExportMyStoriesManagerDelegate>)arg1 ;
-(id<SCExportMyStoriesManagerDelegate>)delegate;
@end
