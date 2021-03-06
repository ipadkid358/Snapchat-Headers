/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, SCSpectaclesCache, NSFileHandle;

@interface SCSpectaclesFile : NSObject <NSCoding> {

	NSString* _localFilename;
	NSString* _remoteFileName;
	long long _remoteFileSize;
	SCSpectaclesCache* _cache;
	long long _lastKnownFileSize;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy) NSString * localFilename;                 //@synthesize localFilename=_localFilename - In the implementation block
@property (nonatomic,copy) NSString * remoteFileName;                //@synthesize remoteFileName=_remoteFileName - In the implementation block
@property (assign) long long lastKnownFileSize;                      //@synthesize lastKnownFileSize=_lastKnownFileSize - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) long long remoteFileSize;               //@synthesize remoteFileSize=_remoteFileSize - In the implementation block
@property (nonatomic,retain) SCSpectaclesCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)_performer;
+(id)contentNameFromRemoteFilename:(id)arg1 ;
+(unsigned long long)fileTypeFromRemoteFilename:(id)arg1 ;
+(id)_suffixForType:(unsigned long long)arg1 ;
+(id)_extensionForType:(unsigned long long)arg1 ;
-(long long)remoteFileSize;
-(long long)localFileSize;
-(id)dataFromLocalFileWithRange:(NSRange)arg1 ;
-(NSString *)remoteFileName;
-(NSString *)localFilename;
-(void)setLastKnownFileSize:(long long)arg1 ;
-(long long)lastKnownFileSize;
-(void)setRemoteFileSize:(long long)arg1 ;
-(id)initWithCache:(id)arg1 localFilename:(id)arg2 remoteFilename:(id)arg3 remoteFileSize:(long long)arg4 ;
-(BOOL)appendData:(id)arg1 range:(NSRange)arg2 ;
-(void)setLocalFilename:(NSString *)arg1 ;
-(void)setRemoteFileName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)removeFromDisk;
-(SCSpectaclesCache *)cache;
-(void)setCache:(SCSpectaclesCache *)arg1 ;
-(void)_closeFile;
-(BOOL)_openFile;
-(id)localFilePath;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end

