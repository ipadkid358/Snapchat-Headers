/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileManager, NSArray;

@interface CLSFileManager : NSObject {

	NSString* _rootPath;
	NSFileManager* _underlyingFileManager;

}

@property (nonatomic,readonly) NSFileManager * underlyingFileManager;              //@synthesize underlyingFileManager=_underlyingFileManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * rootPath;                           //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * structurePath; 
@property (nonatomic,copy,readonly) NSString * activePath; 
@property (nonatomic,copy,readonly) NSString * processingPath; 
@property (nonatomic,copy,readonly) NSString * pendingPath; 
@property (nonatomic,copy,readonly) NSString * preparedPath; 
@property (nonatomic,readonly) NSArray * activePathContents; 
@property (nonatomic,readonly) NSArray * preparedPathContents; 
@property (nonatomic,readonly) NSArray * processingPathContents; 
-(id)pathNamespace;
-(NSString *)activePath;
-(id)contentsOfDirectory:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 ;
-(BOOL)moveItemsFromDirectory:(id)arg1 toDirectory:(id)arg2 ;
-(NSString *)pendingPath;
-(BOOL)removeContentsOfDirectoryAtPath:(id)arg1 ;
-(BOOL)removeContentsOfProcessingPath;
-(BOOL)removeContentsOfPendingPath;
-(void)enumerateReportsInProcessingDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFilesInActiveDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFilesInPreparedDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)moveProcessingContentsToPrepared;
-(BOOL)movePendingToProcessing;
-(NSString *)preparedPath;
-(void)enumerateFilesInDirectory:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)removeContentsOfAllPaths;
-(BOOL)prepareForNewLaunch;
-(NSArray *)activePathContents;
-(NSFileManager *)underlyingFileManager;
-(void)removeLegacyDirectories;
-(id)setupNewPathForExecutionIdentifier:(id)arg1 ;
-(BOOL)removeItemAtPath:(id)arg1 ;
-(NSArray *)processingPathContents;
-(NSArray *)preparedPathContents;
-(NSString *)structurePath;
-(NSString *)processingPath;
-(BOOL)moveItemAtPath:(id)arg1 toDirectory:(id)arg2 ;
-(id)init;
-(NSString *)rootPath;
-(id)fileSizeAtPath:(id)arg1 ;
@end
