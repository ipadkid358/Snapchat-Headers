/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCStoriesSnapMedia, NSDate, NSArray, NSString, NSData, NSSet;

@interface SCStoriesMediaOperationRequest : NSObject <NSCopying> {

	unsigned long long _subtype;
	SCStoriesSnapMedia* _fetchStoriesSnapMedia_media;
	NSDate* _fetchStoriesSnapMedia_expirationDate;
	BOOL _fetchStoriesSnapMedia_userInitiated;
	NSArray* _fetchStoriesSnapMedia_contexts;
	NSString* _fetchStoriesSnapMedia_batchId;
	NSString* _storeMediaFromData_mediaId;
	NSData* _storeMediaFromData_binaryData;
	NSDate* _storeMediaFromData_expirationDate;
	NSString* _storeMediaFromFile_mediaId;
	NSString* _storeMediaFromFile_filePath;
	NSDate* _storeMediaFromFile_expirationDate;
	NSString* _deleteMedia_mediaId;
	NSArray* _deleteBatch_mediaIds;
	NSSet* _deleteAllMedia_mediaIdExceptions;

}
+(id)deleteMediaWithMediaId:(id)arg1 ;
+(id)deleteAllMediaWithMediaIdExceptions:(id)arg1 ;
+(id)deleteBatchWithMediaIds:(id)arg1 ;
+(id)fetchStoriesSnapMediaWithMedia:(id)arg1 expirationDate:(id)arg2 userInitiated:(BOOL)arg3 contexts:(id)arg4 batchId:(id)arg5 ;
+(id)storeMediaFromDataWithMediaId:(id)arg1 binaryData:(id)arg2 expirationDate:(id)arg3 ;
+(id)storeMediaFromFileWithMediaId:(id)arg1 filePath:(id)arg2 expirationDate:(id)arg3 ;
-(id)internalInit;
-(void)matchFetchStoriesSnapMedia:(/*^block*/id)arg1 storeMediaFromData:(/*^block*/id)arg2 storeMediaFromFile:(/*^block*/id)arg3 deleteMedia:(/*^block*/id)arg4 deleteBatch:(/*^block*/id)arg5 deleteAllMedia:(/*^block*/id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

